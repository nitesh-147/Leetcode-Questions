class Solution {
public:
    bool isPerfectSquare(int num) {
        double temp=sqrt(num);
        
        if((int)temp<temp)
            return false;
        return true;
    }
};