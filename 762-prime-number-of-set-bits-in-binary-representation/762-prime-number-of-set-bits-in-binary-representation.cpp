class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int ans=0;
        
        for(int i=left;i<=right;i++){
            int x=i;
            int c=0;
            while(x>0){
                x=x&(x-1);
                c++;
            }
            bool chk=true;
            for(int j=2;j<=sqrt(c);j++){
                if(c%j==0)
                {
                    chk=false;
                    break;
                }
            }
            
          if(chk && c!=1)
              ans++;
        }
        return ans;
    }
};