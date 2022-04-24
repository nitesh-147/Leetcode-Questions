class Solution {
public:
    char findTheDifference(string s, string t) {
        int i,m=0,n=0;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(i=0;i<s.size();i++){
            if(s[i]!=t[i])
                return t[i];
        }
        return t[t.size()-1];
    }
};