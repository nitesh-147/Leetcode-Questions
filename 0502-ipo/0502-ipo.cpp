class Solution {
public:
   
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int,int>> v;
        int n=profits.size();
        for(int i=0;i<profits.size();i++){
            v.push_back({capital[i],profits[i]});
        }
        sort(v.begin(),v.end());
        int i=0;
        priority_queue<int> p;
        while(k--){
            while(i<n && v[i].first<=w){
                p.push(v[i].second);
                i++;
            }
            if(p.empty())break;
            w+=p.top();
            p.pop();
        }
        return w;
    }
};