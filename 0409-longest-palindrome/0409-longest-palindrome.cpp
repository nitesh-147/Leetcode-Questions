class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        int ans=0;
       unordered_map<char,int>::iterator i;
        for(i=m.begin();i!=m.end();i++){
            if(i->second%2==0)
                ans+=i->second;
            else
                ans+=(i->second-1);
        }
        if(ans<s.size())
            ans++;
        return ans;
    }
};