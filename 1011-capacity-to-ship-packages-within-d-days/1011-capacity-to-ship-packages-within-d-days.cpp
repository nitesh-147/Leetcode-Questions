class Solution {
public:
    bool check(vector<int> weights,int d,int w){
        // int days=0;
        int curr=0;
        for(auto i:weights){
            curr+=i;
            if(curr>w){
                curr=i;
                d--;
            }
        }
        return d>0;
    }
    int shipWithinDays(vector<int>& weights, int days) {
       int low=0,high=0;
        for(auto i:weights){
            low=max(low,i);
            high+=i;
        }
        int ans;
        while(low<=high){
            int m=low+(high-low)/2;
            if(check(weights,days,m)){
                ans=m;
                high=m-1;
            }
            else{
                low=m+1;
            }
        }
        return ans;
    }
};