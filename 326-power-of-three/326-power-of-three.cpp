class Solution {
public:
    bool isPowerOfThree(int n) {
        double i=log10(n)/log10(3);
        
        if(n<1)
            return false;
        
        if((int)i<i)
            return false;
        return true;
    }
};