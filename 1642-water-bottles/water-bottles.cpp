class Solution {
public:
    int numWaterBottles(int bottles, int k) {
        int ans = bottles;
        while(bottles>=k){
            int spair = bottles%k;
            bottles=( bottles/k );
            ans+=bottles;
            bottles+=spair;
        }
        return ans;
    }
};