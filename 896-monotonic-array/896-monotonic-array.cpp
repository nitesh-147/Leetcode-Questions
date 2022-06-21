class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> temp=nums,temp2=nums;
        sort(temp.begin(),temp.end());
        sort(temp2.begin(),temp2.end(),greater<int>());
        
        if(nums==temp||nums==temp2)
            return true;
        
        return false;
    }
};