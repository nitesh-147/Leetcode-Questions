class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        // vector<vector<int>> dp(n,vector<int>(target+1,-1));
        
        return helper(n-1,target,nums);
    }
    
    int helper(int n,int target,vector<int> &nums){
        if(n<0){
            return target==0;
        }
        
       int ans1=helper(n-1,target+nums[n],nums);
       int ans2=helper(n-1,target-nums[n],nums);
        
        return ans1+ans2;
    }
};