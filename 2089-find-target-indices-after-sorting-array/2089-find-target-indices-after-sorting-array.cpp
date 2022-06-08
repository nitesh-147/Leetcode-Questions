class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        int a=0,b=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target)
                a++;
            else if(nums[i]<target)
                b++;
            
            
        }
        
        while(a--)
            ans.push_back(b++);
        
        return ans;
        
    }
};