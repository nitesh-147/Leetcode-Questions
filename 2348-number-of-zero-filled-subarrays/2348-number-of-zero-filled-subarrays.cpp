class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0,curr=0;
        for(auto i:nums){
            if(i==0){
                curr++;
                ans+=curr;
            }
            else{
                curr=0;
            }
        }
        return ans;
    }
};