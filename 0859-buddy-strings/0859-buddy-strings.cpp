class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        vector<char> v;
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i]){
                v.push_back(s[i]);
                v.push_back(goal[i]);
            }
            if(v.size()>4) return false;
        }
        if(v.size()==2) return false;
        else if(v.size()==4){
            if(v[0]==v[3] && v[2]==v[1]) return true;
            else return false;
        }
        else{
            unordered_map<char,int> m;
            for(auto i:s)m[i]++;
            for(auto i:m)if(i.second>1) return true;
            return false;
        }
    }
};