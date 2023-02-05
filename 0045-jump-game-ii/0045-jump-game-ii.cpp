class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(),1);
        int n=nums.size();
        dp[n-1]=0;
        for(int i=n-2;i>=0;i--){
            int mn=nums.size();
            for(int j=i+1;j<min(i+1+nums[i],n);j++){
                mn=min(mn,dp[j]);
            }
            dp[i]+=mn;
        }
        return dp[0];
    }
};