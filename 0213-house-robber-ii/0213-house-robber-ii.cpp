class Solution {
public:
    int mx(vector<int>& nums,int s,int e){
        vector<int> dp(e+1);
        dp[e]=nums[e];
        dp[e-1]=max(nums[e-1],dp[e]);
        for(int i=e-2;i>=s;i--){
            dp[i]=max(dp[i+1],nums[i]+dp[i+2]);
        }
        return dp[s];
    }
    int rob(vector<int>& nums) {
       if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[0],nums[1]);
        if(nums.size()==3) return max(nums[0],max(nums[1],nums[2]));
        int n=nums.size();
        int ans1=mx(nums,0,n-2);
        int ans2=mx(nums,1,n-1);
        return max(ans1,ans2);
    }
};