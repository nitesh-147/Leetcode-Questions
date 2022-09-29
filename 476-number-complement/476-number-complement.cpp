class Solution {
public:
    int findComplement(int num) {
      int i=log2(num)+1;
        int n=pow(2,i)-1;
        return (num^n);
    }
};