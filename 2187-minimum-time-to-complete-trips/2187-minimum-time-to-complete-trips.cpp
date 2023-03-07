class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long low=1,high=1e14;
        long long ans=-1;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long curr=0;
            for(auto i:time){
                curr+=mid/i;
            }
            if(curr>=totalTrips){
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