class Solution {
public:
    bool isSubsequence(string s, string t) {
        int pos=0;
        for(int i=0;i<s.size();i++){
            if(t.find(s[i],pos)+1)
                pos=t.find(s[i],pos)+1;
            else
                return false;
                
            }
        
        return true;
    }
};