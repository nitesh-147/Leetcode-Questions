class Solution {
public:
    int hIndex(vector<int>& citations) {
        int low=1,high=1000;
        int ans=0;
        int n=citations.size();
        while(low<=high){
            int mid=low+(high-low)/2;
            int y=lower_bound(citations.begin(),citations.end(),mid)-citations.begin();
            if(n-y>=mid){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};