class Solution {
public:
    int minDays(vector<int>& day, int m, int k) {
        if(m > (day.size()/k)) return -1;
        
        int low=1;
        int high=1e9;
        int ans=*max_element(day.begin(),day.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            int i=0;
            int count=0;
            while(i<day.size()-k+1){
                int x=k;
                while(x-- && day[i]<=mid)                 {
                    i++;
                }
                if(x==-1) count++;
                else i++;
            }
            if(count>=m){
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