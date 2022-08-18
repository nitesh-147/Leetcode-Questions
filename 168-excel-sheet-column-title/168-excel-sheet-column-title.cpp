class Solution {
public:
    string convertToTitle(int c) {
        string ans;
        while(c>0){
            int r=(c%26)?c%26:26;
            c=(c%26)?c/26:c/26-1;
            ans+=char('A'+r-1);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};