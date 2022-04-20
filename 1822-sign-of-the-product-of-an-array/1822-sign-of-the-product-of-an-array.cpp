class Solution {
public:
    int arraySign(vector<int>& nums) {
        int c1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
            {
                return 0;
            }
            else if(nums[i]<0)
                c1++;
        }
        return (c1%2==0)? 1:-1;
    }
};