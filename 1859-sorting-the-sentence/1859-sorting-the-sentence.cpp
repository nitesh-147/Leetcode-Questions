class Solution {
public:
    string sortSentence(string s) {
        map<char,string> m;
        int st=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>='1'&& s[i]<='9'){
                m[s[i]]=s.substr(st,i-st);
                st=i+2;
            }
        }
        string str="";
        for(auto it:m){
            str+=it.second;
            str+=" ";
        }
        return str.substr(0,str.size()-1);
    }
};