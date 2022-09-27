class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x=(start^goal);
        int ans=0;
        while(x>0){
            x=x&(x-1);
            ans++;
        }
        return ans;
    }
};