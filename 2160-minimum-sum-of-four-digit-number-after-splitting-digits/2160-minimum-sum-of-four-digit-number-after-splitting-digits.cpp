class Solution {
public:
    int minimumSum(int num) {
        int a[4],i=0;
        while(num!=0)
        {
            a[i++]=num%10;
            num=num/10;
        }
        sort(a,a+4);
        int d=a[0]*10+a[2];
        int b=a[1]*10+a[3];
        int c=a[0]*10+a[3];
        int e=a[1]*10+a[2];
        return min(d+b,c+e);
    }
};