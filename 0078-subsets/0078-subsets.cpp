class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
         int n=pow(2,nums.size());
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
        return ans;
    }
};