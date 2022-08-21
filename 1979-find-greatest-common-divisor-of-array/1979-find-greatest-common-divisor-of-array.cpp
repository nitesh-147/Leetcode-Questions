class Solution {
public:
    int findGCD(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int mx=nums[0],mn=nums[0];
        for(auto i:nums){
            mx=max(mx,i);
            mn=min(mn,i);
        }
        return gcd(mx,mn);
    }
};