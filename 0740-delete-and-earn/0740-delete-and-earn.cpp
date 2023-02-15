class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        // sort(nums.begin(),nums.end())
        unordered_map<int,int> m;
        int n=nums[0];
        for(auto i:nums) {m[i]+=i;
                          n=max(n,i);
        }
        vector<int> dp(n+1,0);
        dp[1]=m[1];
        for(int i=2;i<n+1;i++){
            dp[i]=max(m[i]+dp[i-2],dp[i-1]);
        }
        return dp.back();
    }
};