class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(auto x:nums){
            sum+=x;
        }
        int sum1=0;
        for(int i=0;i<nums.size();i++){
            if(sum-sum1-nums[i]==sum1)
                return i;
            sum1+=nums[i];
        }
        return -1;
    }
};