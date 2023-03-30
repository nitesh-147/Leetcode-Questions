class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        vector<long long int> v(chalk.size());
        v[0]=chalk[0];
        for(int i=1;i<chalk.size();i++){
            v[i]=v[i-1]+chalk[i];
        }
        k=(k%v.back());
        int ans=upper_bound(v.begin(),v.end(),k)-v.begin();
        return ans;
    }
};