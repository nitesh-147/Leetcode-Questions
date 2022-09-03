class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<int> p;
        
        for(auto i:score){
            p.push(i);
        }
        unordered_map<int,string> m;
        int i=0;
        while(!p.empty()){
            i++;
            if(i==1)
                m[p.top()]="Gold Medal";
            else if(i==2)
                m[p.top()]="Silver Medal";
            else if(i==3)
                m[p.top()]="Bronze Medal" ;
                else
                    m[p.top()]=to_string(i);
            p.pop();
                }
        vector<string> ans;
        int j=0;
        for(auto i:score){
            
                ans.push_back(m[i]);
        }
        return ans;
        
    }
};