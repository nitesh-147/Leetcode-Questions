class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // int a=0;
        // int b=nums.size()-1;
        // int ans=0;
        // while(a<=b){
        //     int m=a+(b-a)/2;
        //     if(nums[m]<target){
        //         ans=m+1;
        //         a=m+1;
        //     }
        //     else
        //         b=m-1;
        // }
        // return ans;
        return lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    }
};