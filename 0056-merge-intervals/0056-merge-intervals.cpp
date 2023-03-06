class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int start=intervals[0][0];
        int end=intervals[0][1],i;
        for(i=1;i<intervals.size();i++){
            while(i<intervals.size() && intervals[i][0]<=end){
                end=max(end,intervals[i][1]);
                i++;
            }
            ans.push_back({start,end});
            if(i<intervals.size()){
                    start=intervals[i][0];
                    end=intervals[i][1];
            }
        
            
        }
        if(i==intervals.size())
        ans.push_back({start,end});
        return ans;
    }
};