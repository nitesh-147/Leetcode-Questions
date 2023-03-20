class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()==1 || nums.size()==2) return false;
        int m1,m2;
        m1=nums[0];m2=(INT_MAX);
        for(auto i=1;i<nums.size();i++){
             if(m1>nums[i]) m1=nums[i];
             else if(nums[i]<m2 && nums[i]>m1)m2=(nums[i]);
             else if(m2<nums[i]) return true;
        }
        return false;
    }
};