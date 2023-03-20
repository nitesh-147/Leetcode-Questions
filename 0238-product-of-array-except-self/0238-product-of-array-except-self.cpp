class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefix=1;
        vector<int> v;
        for(auto i:nums) prefix*=i;
        int suffix=1;

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                prefix/=nums[i];
                v.push_back(suffix*prefix);
                suffix*=nums[i];
            }
            else{
                prefix=1;
                for(int j=i+1;j<nums.size();j++)
                prefix*=nums[j];

                v.push_back(prefix*suffix);
                suffix=0;
            }
        }
        return v;
    }
};