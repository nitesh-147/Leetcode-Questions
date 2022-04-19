class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        // int n=nums.size();
        // if(nums[n-1]==0||nums[n-2]==0||nums[n-3]==0)
            // return 0;
        // else if(nums[n-1]>=nums[n-2]+nums[n-3])
        //     return 0;
        // else{
        //     return nums[n-1]+nums[n-2]+nums[n-3];
        // }
        int ans=0;
        for(int i=0;i<nums.size()-2;i++)
        {
            if((nums[i]<nums[i+1]+nums[i+2])){
                return nums[i]+nums[i+1]+nums[i+2];
            }
        }
        return ans;
    }
};