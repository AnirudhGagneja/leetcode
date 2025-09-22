class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxfreq = INT_MIN;
        int ans=0;
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(int i =0;i<nums.size();i++){
            maxfreq= max(maxfreq,freq[nums[i]]);
        }
        for(int i =0 ;i<nums.size();i++){
            if(freq[nums[i]]==maxfreq){
                ans+=maxfreq;
            }
        }
        return ans/maxfreq;
    }
};