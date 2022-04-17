class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int index=(low+high)/2;
            if(target==nums[index])
                return index;
            else if(target<nums[index])
                high=index-1;
            else
                low=index+1;
        }
        return -1;
    }
};