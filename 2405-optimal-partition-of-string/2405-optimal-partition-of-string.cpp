class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,int> m;
        int ans=1;
        for(auto i:s){
            if(m[i]){
                ans++;
                m.clear();
                m[i]++;
            }
            else
                m[i]++;
        }
        return ans;
    }
};