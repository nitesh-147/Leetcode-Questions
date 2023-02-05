class Solution {
public:
    bool helper(string s,string temp){
        string p;
        while(p.size()<=s.size() && p!=s){
            p+=temp;
        }
        if(p==s) return true;
        return false;
    }
    bool repeatedSubstringPattern(string s) {
       string temp;
       for(int i=0;i<s.size()/2;i++){
           temp.push_back(s[i]);
           if(helper(s,temp))
           return true;
       }
       return false;
    }
};