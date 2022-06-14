class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        vector<int> ans;
        // ans.push_back(0);
        for(int i=0;i<nums.size();i++){
            int count=0;
           for(int j=0;j<nums.size();j++){
               if(i==j)
                   continue;
               if(nums[j]<nums[i])
                   count++;
           }
            ans.push_back(count);
        }
        return ans;
    }
};