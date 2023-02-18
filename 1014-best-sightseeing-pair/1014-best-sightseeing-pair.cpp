class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        pair<int,int> p;
        p.first=values[0];
        p.second=0;
        int ans=INT_MIN;
        for(int i=1;i<values.size();i++){
            ans=max(p.first+values[i]+p.second-i,ans);
            if(values[i]+i>p.first+p.second){
                p.first=values[i];
                p.second=i;
            }
        }
        return ans;
    }
};