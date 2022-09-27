class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            int c=0;
            int x=i;
            while(x>0){
                x=x&(x-1);
                c++;
            }
            ans.push_back(c);
        }
        return ans;
    }
};