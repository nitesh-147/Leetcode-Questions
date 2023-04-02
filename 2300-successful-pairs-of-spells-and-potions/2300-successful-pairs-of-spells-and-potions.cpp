class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        sort(potions.begin(),potions.end());
        for(auto i:spells){
            long long x=ceil((success*1.0)/i);
            int y=lower_bound(potions.begin(),potions.end(),x)-potions.begin();
            // cout<<x<<" "<<y<<"\n";
            ans.push_back(potions.size()-y);
        }
        return ans;
    }
};