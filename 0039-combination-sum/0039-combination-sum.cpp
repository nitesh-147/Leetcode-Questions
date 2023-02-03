class Solution {
public:
    void helper(vector<int>& c,set<vector<int>> &ans,int target,int i=0,int sum=0,vector<int> temp={}){
        if(i==c.size()){
            if(sum==target) ans.insert(temp);
            return;
        }
        if(sum>target) return;
        if(sum==target){
            ans.insert(temp);
            return;
        }
        helper(c,ans,target,i+1,sum,temp);
        temp.push_back(c[i]);
        helper(c,ans,target,i,sum+c[i],temp);
        helper(c,ans,target,i+1,sum+c[i],temp);
    }
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        set<vector<int>> ans;
        helper(c,ans,target);
        vector<vector<int>> v(ans.begin(),ans.end());
        return v;
    }
};