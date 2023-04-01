class Solution {
public:
    int search(vector<int>& nums, int target) {
        int a=0,x;
        int b=nums.size()-1;
        while(a<=b){
         x=(a+b)/2;
            if(nums[x]==target)
                return x;
            else  if(nums[x]>target)
                b=x-1;
            else
                a=x+1;
        }
        return -1;
    }
};