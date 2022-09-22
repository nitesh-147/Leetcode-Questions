class Solution {
public:
    string reverseWords(string s) {
        string ans="",temp;
        for(auto i:s){
            if(i==' '){
               reverse(temp.begin(),temp.end());
                ans=ans+" "+temp;
                temp.clear();
            }
            else 
                temp.push_back(i);
        }
        reverse(temp.begin(),temp.end());
                ans=ans+" "+temp;
        return ans.substr(1);
    }
};