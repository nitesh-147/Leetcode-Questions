class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums[0]<nums.back()) return nums[0];
        
        int lo=0,hi=nums.size()-1;
        while(lo<hi){
            int m=(lo+hi)/2;
            if(nums[m]<nums[hi]) hi=m;
            else if(nums[m]>nums[hi]) lo=m+1;
            else hi--;
        }
        return nums[hi];
    }
};