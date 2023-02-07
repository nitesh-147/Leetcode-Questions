class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(),1);
        vector<int> count(nums.size(),1);
        int mx=1;
        for(int i=0;i<nums.size();i++){
            for(int j=i-1;j>=0;j--){
                if(nums[i]>nums[j] && dp[j]+1>dp[i]){
                   dp[i]=dp[j]+1;
                    count[i]=count[j];
                }
                 else if(nums[i]>nums[j] && dp[j]+1==dp[i]){
                    count[i]+=count[j];
                }
            }
            mx=max(mx,dp[i]);
        }
       int ans=0;
         for(int i=count.size()-1;i>=0;i--){
           if(dp[i]==mx) ans+=count[i];
        }
        return ans;
    }
};