class Solution {
public:
    int maxBottlesDrunk(int n, int r) {
        int ans=n ,remain;
        while(n>=r){
            n-=r;
            r++;
            ans++;
            n++;
        }
        return ans;
    }
};