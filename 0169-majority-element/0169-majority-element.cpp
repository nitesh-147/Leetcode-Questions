class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=1;
         if(nums.size()==1)
            return 1;
        sort(nums.begin(),nums.end());
       for(int i=1;i<nums.size();i++){
           if(nums[i]==nums[i-1])
               n++;
           else
               n=1;
           
           if(n>(nums.size()/2))
               return nums[i];
       }
       
        return -1;
    }
};