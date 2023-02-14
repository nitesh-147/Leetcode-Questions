class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(auto i:nums) m[i]++;
        int ans=0;
        for(auto i:nums)ans+=(m[i+k]+m[i-k]);
        return ans/2;
    }
};