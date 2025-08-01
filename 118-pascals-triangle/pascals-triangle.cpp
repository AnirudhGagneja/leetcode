class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans(n);
        for(int i =0;i<n;i++){
            ans[i].resize(i+1);
            for(int j =0;j<=i;j++){
                if(i==j || j==0){
                    ans[i][j]=1;
                }
                else{
                    ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
                }
            }
        }
        return ans;
    }
};