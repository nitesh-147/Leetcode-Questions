class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0;
        int a=0,b=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='L')
                a++;
            else
                b++;
            
            if(a==b)
                ans++;
        }
        return ans;
    }
};