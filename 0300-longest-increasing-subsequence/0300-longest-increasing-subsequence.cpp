class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> temp;
        for(int i=0;i<nums.size();i++){
            int a=lower_bound(temp.begin(),temp.end(),nums[i])-temp.begin();
            if(a==temp.size()){
                temp.push_back(nums[i]);
            }
            else{
                temp[a]=nums[i];
            }
        }
        return temp.size();
    }
};