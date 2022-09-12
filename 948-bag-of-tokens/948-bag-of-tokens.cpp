class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int a=0,b=tokens.size()-1;
        sort(tokens.begin(),tokens.end());
        int ans=0,points=0;
        while(a<=b && (tokens[a]<=power || points>0)){
            while( a<=b && power>=tokens[a]){
                power-=tokens[a++];
                points++;
            }
            ans=max(ans,points);
            if(a<=b && ans>0){
                power+=tokens[b];
                points--;
                b--;
            }
        }
        return ans;
    }
};