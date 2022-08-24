class Solution {
public:
    int ans=0;
    int countOperations(int num1, int num2) {
        if(num1==0||num2==0)
            return ans;
        
        ans++;
        if(num1>=num2)
        return countOperations(num1-num2,num2);
        else
           return countOperations(num1,num2-num1);
        
        return 0;
    }
};