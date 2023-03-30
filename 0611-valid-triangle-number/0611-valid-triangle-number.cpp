class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        if(nums.size()<3) return 0;
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size()-2;i++){
            for(int j=i+1;j<nums.size()-1;j++){
                int x=nums[i]+nums[j];
                int a=lower_bound(nums.begin()+j+1,nums.end(),x)-nums.begin();
                ans+=(a-j-1);
            }
        }
        return ans;
    }
};