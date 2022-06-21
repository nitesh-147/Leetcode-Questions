class Solution {
public:
    bool isSubsequence(string s, string t) {
        int pos=-1;
        for(int i=0;i<s.size();i++){
            pos=t.find(s[i],pos+1);
            if(pos>=t.size()){
                return false;
                
            }
        }
        return true;
    }
};