class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        // if(hour<dist.size()-1) return -1;
        int low=1,high=1e7;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            double time=0;
            for(int i=0;i<dist.size()-1;i++){
                time+= ceil((dist[i]*1.0)/mid);
            }
            time+=(1.0*dist.back())/mid;
            
            if(time<=hour){
                high=mid-1;
                ans=mid;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};