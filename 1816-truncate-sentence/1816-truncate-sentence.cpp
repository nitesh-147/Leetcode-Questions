class Solution {
public:
    string truncateSentence(string s, int k) {
        int x=0;
        for(auto i:s){
            
            if(i==' ')
                k--;
            if(k==0)
                break;
            x++;
        }
        return s.substr(0,x);
    }
};