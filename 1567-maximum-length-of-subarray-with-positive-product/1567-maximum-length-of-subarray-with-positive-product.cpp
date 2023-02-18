class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int s=0,f=-1,l=-1;
        int ans=0;
        int c=0,i;
        for(i=0;i<nums.size();i++){
            if(nums[i]==0){
                if(c%2==0){
                    ans=max(ans,i-s);
                }
                else if(f!=-1){
                    ans=max({ans,l-s,i-f-1});
                }
                else{
                    ans=max(ans,i-s);
                }
                s=i+1;
                f=-1;
                l=-1;
                c=0;
            }
            else{
                if(f==-1 && nums[i]<0) f=i;
                if(nums[i]<0){
                    l=i;
                    c++;
                }
            }
        }
                if(c%2==0){
                    ans=max(ans,i-s);
                }
                else if(f!=-1){
                    ans=max({ans,l-s,i-f-1});
                }
                else{
                    ans=max(ans,i-s);
                }
        return ans;
    }
};