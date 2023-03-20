class Solution {
public:
    int search(vector<int>& nums, int target) {
        // int p=0;
        // for(auto i:nums){
        //     if(i==target)
        //     return p;
        //     p++;
        // }
        // return -1;

        int l=0,r=nums.size()-1,m;
        while(l<=r){
            m=l+(r-l)/2;
            if(nums[m]==target)
            return m;
            else if(nums[l]<=nums[m]){
                if(nums[l]>target || nums[m]<target)
                  l=m+1;
                  else
                  r=m-1;
            }
            else{
                if(target<nums[m]||target>nums[r])
                r=m-1;
                else
                l=m+1;
            }
            
        }
        return -1;
        
    }
};