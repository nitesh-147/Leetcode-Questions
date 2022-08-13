class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;
        string y;
        int x=words[0].length();
        sort(words.begin(),words.end());
       
        
        int n=x*words.size();
        for(int i=0;i<s.size()-n+1;i++){
            vector<string> v;
           for(int j=i;j<i+n;j+=x)
           {
               string temp=s.substr(j,x);
               v.push_back(temp);
           }
            sort(v.begin(),v.end());
            if(v==words)
                ans.push_back(i);
        }
        return ans;
    }
};