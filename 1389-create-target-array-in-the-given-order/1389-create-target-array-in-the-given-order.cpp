class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
       // int arr[nums.size()];
        
//         for(int i=0;i<nums.size();i++){
//             arr[index[i]]=nums[i];
//         }
        vector<int> target;
        for(int i=0;i<nums.size();i++){
            auto it=target.begin()+index[i];
            target.insert(it,nums[i]);
        }
        return target;
    }
};