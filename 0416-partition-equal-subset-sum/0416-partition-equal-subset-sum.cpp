class Solution {
public:
    vector<vector<int>> dp;
    bool canPartition(vector<int>& nums) {
        dp.resize(nums.size(),vector<int>(1e5,-1));
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum&1) return false;
        return helper(0,0,sum,nums);
    }
    
    bool helper(int i,int sum1,int sum2,vector<int> &nums){
        if(i==nums.size() && sum1==sum2/2) return true;
        if(i==nums.size()) return false;
        
        if(dp[i][sum1]!=-1) return dp[i][sum1];
        
        
        bool notPick=helper(i+1,sum1,sum2,nums);
        
        bool pick=false;
        if(sum1<sum2/2)
        pick= helper(i+1,sum1+nums[i],sum2,nums);
       
        
        return dp[i][sum1]=(pick || notPick);
    }
};