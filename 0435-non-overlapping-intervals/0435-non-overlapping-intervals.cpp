class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int ans=0;
        int prev=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]>=prev){
                prev=intervals[i][1];
            }
            else{
                prev=min(prev,intervals[i][1]);
              ans++;
            } 
        }
        return ans;
    }
};