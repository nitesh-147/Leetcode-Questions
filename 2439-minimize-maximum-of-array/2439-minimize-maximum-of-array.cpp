class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        int low=*min_element(nums.begin(),nums.end());
        int high=*max_element(nums.begin(),nums.end());
        int ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            // cout<<mid<<endl;
            long long curr=nums.back();
            for(int i=nums.size()-1;i>0;i--){
                if(curr<=mid){
                    curr=nums[i-1];
                }
                else{
                    curr=nums[i-1]+(curr-mid);
                }
            }
            // cout<<curr<<endl;
            if(curr<=mid){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};