class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=*max_element(piles.begin(),piles.end());
        int ans=-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            long long int curr=0;
            for(auto i:piles){
                curr+=(i/mid);
                if(i%mid!=0) curr++;
            }
            if(curr<=h){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};