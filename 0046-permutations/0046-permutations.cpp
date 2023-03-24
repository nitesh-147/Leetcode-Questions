class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans={nums};
        next_permutation(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=n-1;i>1;i--) n*=i;

        for(int i=1;i<n;i++){
            ans.push_back(nums);
            next_permutation(nums.begin(),nums.end());
        }

        return ans;
    }
};