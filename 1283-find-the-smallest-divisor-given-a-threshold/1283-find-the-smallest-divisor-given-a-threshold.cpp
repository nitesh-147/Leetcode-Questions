class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1,high=1e6;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int temp=0;
            for(auto i:nums){
                temp+=ceil((i*1.0)/mid);
            }
            if(temp<=threshold){
                high=mid-1;
                ans=mid;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};