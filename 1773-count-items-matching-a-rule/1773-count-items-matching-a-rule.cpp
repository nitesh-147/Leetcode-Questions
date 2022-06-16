class Solution {
public:
    int countMatches(vector<vector<string>>& items, string rulekey, string rulevalue) {
        int ans=0;
        int j=(rulekey=="type")? 0:(rulekey=="color")? 1:2;
        for(int i=0;i<items.size();i++){
            if(items[i][j]==rulevalue)
                ans++;
        }
        return ans;
    }
};