class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(is_sorted(nums.begin(),nums.end(),greater<int>())){
            sort(nums.begin(),nums.end());
        }
        else{
            int i=nums.size()-2;
            while(nums[i]>=nums[i+1]){
                i--;
            }
            int j=i+1;
            while(j<nums.size() && nums[j]>nums[i]){
                j++;
            }
            swap(nums[i],nums[j-1]);
            sort(nums.begin()+i+1,nums.end());
        }
    }
};