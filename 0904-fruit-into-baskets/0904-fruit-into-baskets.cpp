class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> m;
        int i=0,j=0;
        int ans=INT_MIN;
        while(j<fruits.size()){
            m[fruits[j]]++;
            if(m.size()>2){
                ans=max(ans,j-i);
                while(true){
                    m[fruits[i]]--;
                    if(m[fruits[i]]==0){
                        m.erase(fruits[i]);
                        i++;
                        break;
                    }
                    i++;
                }
            }
            j++;
        }
        ans=max(ans,j-i);
        return ans;
    }
};