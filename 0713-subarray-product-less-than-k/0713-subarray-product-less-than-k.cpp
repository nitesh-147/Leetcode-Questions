class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k==0||k==1) return 0;
        int i=0,j=0;
        int p=1;
        int ans=0;
        while(j<nums.size()){
                p*=nums[j];
            if(p>=k){
               
               cout<<ans<<" "<<i<<endl;
               while(p>=k){
                   ans+=(j-i);
                   p/=nums[i];
                   i++;
               }
            }
            j++;
        }
        ans+=((j-i)*(j-i+1)/2);
        return ans;
    }
};