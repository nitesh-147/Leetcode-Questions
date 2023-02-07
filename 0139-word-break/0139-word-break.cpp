class Solution {
public:
    
    bool helper(string s,unordered_map<string,int> m,vector<int> &dp,int i=0){
        if(i>=s.size()){
            return true;
        }
        if(dp[i]!=-1) return dp[i];
        string temp;
        for(int j=i;j<s.size();j++){
            temp+=s[j];
            if(m[temp]>=1) {
                if(helper(s,m,dp,j+1)) return dp[i]=1;
            }
        }
        return dp[i]=0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string,int> m;
        for(auto i:wordDict) m[i]++;
        vector<int> dp(s.size(),-1);
        return helper(s,m,dp);
    }
};