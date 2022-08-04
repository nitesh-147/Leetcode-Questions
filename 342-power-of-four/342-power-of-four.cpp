class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
            return false;
        else if((n & (n-1)) ==0){
            int t=log2(n);
            if(t%2==0)
                return true;
            else
                return false;
        }
        return false;
    }
};