class Solution {
public:
    bool isHappy(int n) {
        int sum=0;
        unordered_map<int,int> m;
        
        while(n!=1){
            while(n!=0){
                int digit=n%10;
                
                sum+=digit*digit;
                n/=10;
            }
            
            if(m[sum])
                return false;
            else
                m[sum]++;
            
            n=sum;
            sum=0;
        }
        return true;
    }
};