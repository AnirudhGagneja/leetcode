class Solution {
public:
    int smallestNumber(int n) {
        int count=0;
        while(n>0){
            // n=n%2;
            count++;
            n/=2;
        }
        int ans=0;
        while(count>0){
            ans= ans*2 +1;
            count--;
        }
        return ans;
    }
};