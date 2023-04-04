class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int ans=0;
        // for(auto i:nums){
        //     ans^=i;
        // }
        // return ans;
        int n=nums.size();
        int left=0,right=n-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if((mid&1) && mid+1<n && nums[mid]==nums[mid+1]){
                right=mid-1;
            }
            else if((mid&1) && mid-1>-1 && nums[mid]==nums[mid-1]){
                left=mid+1;
            }
            else if(mid+1<n && nums[mid]==nums[mid+1]){
                left=mid+1;
            }
            else if( mid-1>-1 && nums[mid]==nums[mid-1]){
                 right=mid-1;
            }
            else return nums[mid];   
        }
        return -1;
    }
};