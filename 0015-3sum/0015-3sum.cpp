class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         set<vector<int>> ans;
         sort(nums.begin(),nums.end());
         for(int i=0;i<nums.size()-2;i++){
             int j=i+1,k=nums.size()-1;
            //  int sum=0;
             while(j<k){
                 int sum=nums[j]+nums[k];
                 if(nums[i]+sum<0)j++;
                 else if(nums[i]+sum>0) k--;
                 else{
                     ans.insert({nums[i],nums[j],nums[k]});
                     j++;
                     k--;
                 }
             }
         }
       vector<vector<int>> a;
       for(auto i:ans) a.push_back(i);
       return a;
    }
};