class Solution {
public:
    bool isIsomorphic(string s, string t) {
       if(s.size()!=t.size())
           return false;
        unordered_map<char,char> m,n;
        for(int i=0;i<s.size();i++){
            m[s[i]]=t[i];
            n[t[i]]=s[i];
        }
         for(int i=0;i<s.size();i++){
            if(m[s[i]]!=t[i] || n[t[i]]!=s[i])
                return false;
        }
        return true;
    }
};