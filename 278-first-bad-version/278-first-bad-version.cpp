// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int a=1;
        int b=n;
        int ans=1;
        while(a<=b){
             int x=a+(b-a)/2;
            if(isBadVersion(x))
            {
                b=x-1;
                // ans=x;
            }
            else
                a=x+1;
        }
        return (isBadVersion(a))? a:a+1;
    }
};