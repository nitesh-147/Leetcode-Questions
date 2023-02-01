class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
          set<vector<int>> s;
        s.insert(nums);
        int n=nums.size();
        for(int i=n-1;i>1;i--)n*=i;
        next_permutation(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++) {
            s.insert(nums);
            next_permutation(nums.begin(),nums.end());
        }
        vector<vector<int>> ans(s.begin(),s.end());
        return ans;
    }
};