class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>> ans;
        vector<int> v;
        priority_queue<pair<int,int>> p;
        
        for(int i=0;i<nums.size();i++)
            p.push({nums[i],i});
        
        while(k--){
            ans.push_back({p.top().second,p.top().first});
            p.pop();
        }
        sort(ans.begin(),ans.end());
        for(auto i:ans)
            v.push_back(i.second);
        return v;
    }
};