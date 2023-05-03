class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<unordered_set<int>> ans(2);
        unordered_map<int,int> m,n;
        for(auto i:nums1)m[i]++;
        for(auto i:nums2){
            if(!m[i]) ans[1].insert(i);
            n[i]++;
        }
        for(auto i:nums1){
            if(!n[i])
                ans[0].insert(i);
        }
        vector<vector<int>> a(2);
        for(auto i:ans[0]) a[0].push_back(i);
        for(auto i:ans[1]) a[1].push_back(i);
        
        return a;
    }
};