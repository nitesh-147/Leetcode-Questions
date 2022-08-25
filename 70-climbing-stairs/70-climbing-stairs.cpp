class Solution {
public:
    int climbStairs(int n) {
        if(n==1||n==2||n==3)
            return n;
        else if(n==4)
            return 5;
        else if(n==5)
            return 8;
        else if(n==6)
            return 13;
        else if(n==7)
            return 21;
        
        return climbStairs(n-1)+climbStairs(n-2);
    }
};