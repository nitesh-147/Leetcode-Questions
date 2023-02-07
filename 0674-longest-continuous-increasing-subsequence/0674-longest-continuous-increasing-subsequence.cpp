class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int i=0,j=1;
        int ans=1;
        while(j<nums.size()){
            if(nums[j]<=nums[j-1]){
                ans=max(j-i,ans);
                i=j;
            }
            j++;
        }
        ans=max(j-i,ans);
        return ans;
    }
};