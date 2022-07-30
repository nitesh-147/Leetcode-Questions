class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs.size();i++){
            if(i){
                int j;
                for(j=0;j<min(ans.size(),strs[i].size());j++){
                    if(ans[j]!=strs[i][j])
                        break;
                }
                ans=strs[i].substr(0,j);
            }
            else{
                ans=strs[i];
            }
        }
        return ans;
    }
};