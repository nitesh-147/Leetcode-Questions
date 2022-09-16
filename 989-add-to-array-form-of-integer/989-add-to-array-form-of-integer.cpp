class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        for(int i=num.size()-1;i>=0;i--){
            int x=num[i];
            num[i]=(x+k)%10;
            k=(x+k)/10;
        }
        while(k!=0){
            num.insert(num.begin(),k%10);
            k/=10;
        }
            return num;
        
        
    }
};