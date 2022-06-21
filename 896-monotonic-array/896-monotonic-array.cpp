class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
//         vector<int> temp=nums,temp2=nums;
//         sort(temp.begin(),temp.end());
//         sort(temp2.begin(),temp2.end(),greater<int>());
        
//         if(nums==temp||nums==temp2)
//             return true;
        
        for(int i=1;i<nums.size();i++){
            if(nums[0]>nums[nums.size()-1])
            {
                if(nums[i]>nums[i-1])
                    return false;
            }
            else
            {
                if(nums[i]<nums[i-1])
                    return false;
            }
        }
        return true;
    }
};