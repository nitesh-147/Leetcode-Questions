class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(auto x:nums){
            sum+=x;
        }
        int sum1=0;
        for(int i=0;i<nums.size();i++){
            sum1+=nums[i];
            if(sum-sum1==sum1-nums[i]) return i;
        }
        return -1;
    }
};