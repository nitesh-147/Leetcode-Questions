class Solution {
public:
   vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         int n=pow(2,nums.size());
         sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            int p=0;
            vector<int> t;
            int x=i;
            while(x!=0){
                if(x&1) t.push_back(nums[p]);
                x>>=1;
                p++;
            }
            ans.push_back(t);
            t.clear();
        }
        sort(ans.begin(),ans.end());
        vector<vector<int>> a;
        a.push_back(ans[0]);
        for(int i=1;i<ans.size();i++){
            if(ans[i]==ans[i-1]) continue;
            a.push_back(ans[i]);
        }
        return a;
    }
};