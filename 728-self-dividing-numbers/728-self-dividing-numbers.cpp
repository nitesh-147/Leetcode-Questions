class Solution {
public:
    bool check(int n){
        int x=n;
        while(n!=0){
            int t=n%10;
            if(t==0)
                return false;
            if(x%t!=0){
                return false;
            }
            n/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        for(int i=left;i<=right;i++){
            if(check(i))
                v.push_back(i);
        }
        return v;
    }
};