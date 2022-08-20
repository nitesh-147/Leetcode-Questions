class Solution {
public:
    bool checkPerfectNumber(int num) {
        int n=0;
        if(num==1) return false;
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                n+=i;
                
                if(num/i!=i)
                    n+=num/i;
            }
                
            
        }
        if(++n==num)
            return true;
        return false;
    }
};