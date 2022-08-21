class Solution {
public:
//     int reverse(int n){
//         int ans;
//         for(int i=0;i<2;i++){
//          ans=0;
        
//         while(n!=0){
//             ans=ans*10+n%10;
//             n/=10;
//         }
//         n=ans;}
//         return ans;
        
//     }
    bool isSameAfterReversals(int num) {
        // if(num==reverse(num))
        //     return true;
        // return false;
        if(num==0)
            return true;
    if(num%10==0)
        return false;
    return true;
    }
};