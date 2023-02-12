class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
      vector<int> fib={0,1};
      for(int i=2;i<=n;i++){
          fib.push_back(fib[i-1]+fib[i-2]);
      }
      return fib.back();
    }
};