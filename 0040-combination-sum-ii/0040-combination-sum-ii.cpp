class Solution {
public:
    void helper(vector<int>& c,vector<vector<int>> &ans,int target,int i=0,int sum=0,vector<int> temp={}){
       
        if(sum>target) return;
        if(sum==target){
            ans.push_back(temp);
            return;
        }
         if(i==c.size()){
            return;
        }
        temp.push_back(c[i]);
        helper(c,ans,target,i+1,sum+c[i],temp);
        temp.pop_back();
        // helper(c,ans,target,i,sum+c[i],temp);
        while(i+1<c.size() && c[i]==c[i+1])i++;
        helper(c,ans,target,i+1,sum,temp);
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int target) {
        sort(c.begin(),c.end());
        vector<vector<int>> ans;
        helper(c,ans,target);
        return ans;
    }
};