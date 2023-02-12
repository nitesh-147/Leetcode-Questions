class Solution {
public:
    int tribonacci(int n) {
        vector<int> fib={0,1,1};
        if(n<=2) return fib[n];

        for(int i=3;i<=n;i++){
            fib.push_back(fib[i-1]+fib[i-2]+fib[i-3]);
        }
        return fib.back();
    }
};