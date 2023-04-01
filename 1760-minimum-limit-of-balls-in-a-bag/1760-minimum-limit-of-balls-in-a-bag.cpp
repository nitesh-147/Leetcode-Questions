class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int low=1,high=*max_element(nums.begin(),nums.end());
        int ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            int op=0;
            for(auto i:nums){
                op+=(ceil((1.0*i)/mid)-1);
            }
            if(op<=maxOperations){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};