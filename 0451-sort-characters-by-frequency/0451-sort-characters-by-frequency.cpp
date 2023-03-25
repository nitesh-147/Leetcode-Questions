class Solution {
public:
unordered_map<char,int> m;

    string frequencySort(string s) {
        
        for(auto i:s){
         m[i]++;
        }
       priority_queue<pair<int,char>> p;
       for(auto i:s){
           p.push({m[i],i});
       }
        s.clear();
     while(!p.empty()){
         s.push_back(p.top().second);
         p.pop();
     }
        return s;
    }
};