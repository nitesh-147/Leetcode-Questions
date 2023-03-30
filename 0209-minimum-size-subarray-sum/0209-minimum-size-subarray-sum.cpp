class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        for(auto i:nums)cout<<i<<" ";
        if(nums.back()<target) return 0;
        int ans=lower_bound(nums.begin(),nums.end(),target)-nums.begin()+1;
        // cout<<ans;
        for(int i=0;i<nums.size();i++){
            int a=lower_bound(nums.begin(),nums.end(),target+nums[i])-nums.begin();
            cout<<a<<endl;
            if(a!=nums.size())
            ans=min(ans,a-i);
        }
        return ans;
    }
};