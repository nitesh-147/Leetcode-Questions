class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,vector<int>>m;
        int x=0;
        for(auto i:nums) {
            m[i].push_back(x++);
        }
        int maax=INT_MIN;
        for(auto i:m) {
            int z=i.second.size();
            maax=max(maax,z);
        }
        int miin=INT_MAX;
        for(auto i:m) {
            int size=i.second.size();
            if(size==maax)
                miin=min(i.second[size-1]-i.second[0]+1,miin);
        }
        return miin;
    }
};