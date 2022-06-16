class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> ans;
       for(char i=s[0];i<=s[3];i++){
           for(char j=s[1];j<=s[4];j++){
               string t;
               t.push_back(i);
               t.push_back(j);
               ans.push_back(t);
           }
       }
    return ans;
    }
};