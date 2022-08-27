class Solution {
public:
    bool judgeCircle(string moves) {
        int u=0,d=0,l=0,r=0;
        for(auto i:moves){
            if(i=='U')
                u++;
            else if(i=='D')
                d++;
            else if(i=='R')
                r++;
            else
                l++;
            
        }
        if(l==r && u==d)
            return true;
        return false;
    }
};