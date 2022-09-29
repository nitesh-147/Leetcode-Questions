class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
       int n=pow(2,nums.size());
        int ans=0;
        for(int i=0;i<n;i++){
            int xr=0;
            int p=0;
            int x=i;
            while(x>0){
                if(x&1)
                    xr^=nums[p];
                p++;
                x>>=1;
            }
            ans+=xr;
        }
        return ans;
    }
};