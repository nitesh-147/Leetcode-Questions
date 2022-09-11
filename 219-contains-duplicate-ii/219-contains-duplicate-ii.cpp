class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i=0;i<=k && i<nums.size();i++){
            if(m[nums[i]])
                return true;
            else
                m[nums[i]]++;
        }
        int i=0;
        
        while(k<nums.size()-1){
            m[nums[i]]--;
            i++;
            if(m[nums[k+1]]>0)
                return true;
            else
                m[nums[k+1]]++;
            
            k++;
        }
        return false;
    }
};