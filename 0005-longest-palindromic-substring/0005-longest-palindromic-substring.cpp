class Solution {
public:
    string longestPalindrome(string s) {
       int mx=1;
       string ans=s.substr(0,1);
       for(int i=1;i<s.size();i++){
           int l=i-1,r=i+1;
           while(l>=0 && r<s.size() && s[l]==s[r]){
               l--;
               r++;
           }
           string temp=s.substr(l+1,r-1-l);
           if(ans.size()<temp.size()) ans=temp;

           if( i!=s.size()-1 && s[i]==s[i+1]){
               if(ans.size()<2){
                   ans=s.substr(i,2);
               }
               l=i-1;
               r=i+2;
            while(l>=0 && r<s.size() && s[l]==s[r]){
               l--;
               r++;
           }
           temp=s.substr(l+1,r-l-1);
           if(ans.size()<temp.size()) ans=temp;
           }

           if(s[i]==s[i-1]){
                if(ans.size()<2){
                   ans=s.substr(i-1,2);
                   cout<<s.substr(i-1,2);
               }
               l=i-2;
               r=i+1;
            while(l>=0 && r<s.size() && s[l]==s[r]){
               l--;
               r++;
           }
           temp=s.substr(l+1,r-l-1);
           if(ans.size()<temp.size()) ans=temp;
           }

       }
       return ans;
    }
};