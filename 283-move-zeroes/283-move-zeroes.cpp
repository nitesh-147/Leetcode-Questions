class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        auto it=nums.begin();
        for(int i=n-1;i>=0;i--){
            if(nums[i]==0)
            {
                nums.erase(it+i);
                nums.push_back(0);
            }
        }
    }
};