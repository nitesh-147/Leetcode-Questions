class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if(changed.size()%2!=0)
            return {};
        vector<int> ans;
        unordered_map<int,int> m;
        
        for(auto i:changed)
            m[i]++;
        sort(changed.begin(),changed.end());
        
        for(auto i: changed){
            if(m[i]){
                if(m[2*i])
                {
                    ans.push_back(i);
                    m[i]--;
                    m[2*i]--;
                }
                else{
                    return {};
                }
            }
        }
        return ans;
    }
};