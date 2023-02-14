class Solution {
public:
    bool check(string s1,string s2){
        unordered_map<char,char> m;
        for(int i=0;i<s1.size();i++){
            m[s1[i]]=s2[i];
        }
        for(int i=0;i<s1.size();i++){
            s1[i]=m[s1[i]];
        }
        return s1==s2;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        for(auto i:words){
            if(check(i,pattern) && check(pattern,i))
                ans.push_back(i);
        }
        return ans;
    }
};