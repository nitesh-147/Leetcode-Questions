class Solution {
public:
    
    int addDigits(int num) {
        int sum=0;
        while(num>9){
            sum+=num%10;
            num/=10;
            if(num<10){
                num+=sum;
                sum=0;
            }
        }
        return num;
    }
};