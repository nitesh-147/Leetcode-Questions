class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0||s.size()==1) return s.size();
        int i=0,j=1;
        unordered_map<char,int> m;
        m[s[i]]=1;
        int ans=1;
        while(j<s.size()){
            m[s[j]]++;
            if(m[s[j]]==2){
                ans=max(ans,j-i);
                while(s[i]!=s[j]) m.erase(s[i++]);
                m[s[i++]]--;
            }
            j++;
        }
         ans=max(ans,j-i);
         return ans;
    }
};