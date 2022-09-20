class Solution {
public:
    int countAsterisks(string s) {
        unordered_map<char,int> m;
        int ans=0;
        for(auto i:s){
            if(m['|']%2==0 && i=='*')
                ans++;
            m[i]++;
                
        }
        return ans;
    }
};