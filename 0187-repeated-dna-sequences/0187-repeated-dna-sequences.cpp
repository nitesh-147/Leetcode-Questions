class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.size()<10) return{};
        unordered_map<string,int> m;
        for(int i=0;i<s.size()-9;i++){
            string t=s.substr(i,10);
            m[t]++;
        }
        vector<string> ans;
        for(auto i:m){
            if(i.second>=2) ans.push_back(i.first);
        }
        return ans;
    }
};