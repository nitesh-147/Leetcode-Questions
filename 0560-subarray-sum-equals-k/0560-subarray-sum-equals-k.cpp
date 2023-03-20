class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        unordered_map<int,int> m;
        m[nums[nums.size()-1]]++;
        int ans=0;
        for(int i=nums.size()-2;i>=0;i--){
             ans+=m[nums[i]+k];
             m[nums[i]]++;
        }
        ans+=m[k];
        return ans;
    }
};