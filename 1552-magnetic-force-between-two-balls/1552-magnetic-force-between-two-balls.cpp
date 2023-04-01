class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        // int low=1,high=position.size();
        int ans;
        sort(position.begin(),position.end());
        int low=1,high=position.back();
        while(low<=high){
            int mid=low+(high-low)/2;
            int count=1;
            int prev=position[0];
            for(auto i:position){
                if(i-prev>=mid){
                    prev=i;
                    count++;
                }
            }
            if(count>=m){
                low=mid+1;
                ans=mid;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};