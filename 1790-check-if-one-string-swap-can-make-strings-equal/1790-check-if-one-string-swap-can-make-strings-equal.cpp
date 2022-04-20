class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int cnt=0,a[3],b[3];
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]!=s2[i]){
                a[cnt]=s1[i];
                b[cnt]=s2[i];
                cnt++;
            }
                
            
            if(cnt>2)
                return false;
        }
        if(cnt==1)
            return false;
        else if(cnt==2 && (a[0]!=b[1]||b[0]!=a[1]))
            return false;
        return true;
    }
};