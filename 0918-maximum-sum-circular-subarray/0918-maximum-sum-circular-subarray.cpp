class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total=0,curr=0,curr2=0,mx=INT_MIN,mn=INT_MAX;
        for(auto i:nums){
             total+=i;
             curr+=i;
             mn=min(mn,curr);
             if(curr>0)
             curr=0;
            curr2+=i;
             mx=max(mx,curr2);
             if(curr2<0) curr2=0;
        }
        if(total-mn==0) return mx;
        return max(total-mn,mx);
    }
};