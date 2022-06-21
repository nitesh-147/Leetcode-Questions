class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<int,int> m,n;
        
        for(int i=0;i<s.size();i++){
            if(m[(int)t[i]]==0 && n[(int)s[i]]==0){
                m[(int)t[i]]=(int)s[i];
                n[(int)s[i]]=(int)t[i];
            }
            else{
                if(m[(int)t[i]]!=(int)s[i] || n[(int)s[i]]!=(int)t[i]  )
                    return false;
            }
        }
        return true;
    }
};