class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string temp;
        vector<string> v;
        for(auto i:s){
            if(i!=' '){
                temp+=i;
            }
            else{
                v.push_back(temp);
                temp.clear();
            }
        }
        v.push_back(temp);
        // for(auto i:v)cout<<i<<" ";
        if(v.size()!=pattern.size()) return false;
        unordered_map<char,string> m;
        unordered_map<string,char> n;
     for(auto i:v)n[i]='0';
    // cout<<n["abc"]<<endl;
        // cout<<"a"<<m['c']<<"a";
        for(int i=0;i<pattern.size();i++){
            if(n[v[i]]=='0'){
                n[v[i]]=pattern[i];
            }
            else{
                if(n[v[i]]!=pattern[i]) return false;
            }
            if(m[pattern[i]]=="")
                m[pattern[i]]=v[i];
            else{
                if(m[pattern[i]]!=v[i])
                    return false;
            }
        }
        return 1;
    }
};