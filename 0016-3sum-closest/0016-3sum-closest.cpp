class Solution {
public:
    int threeSumClosest(vector<int>& nums, int tar) {
        int ans=1e9;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
           int left=i+1,right=nums.size()-1;
           while(left<right){
               int curr=nums[i]+nums[left]+nums[right];
               if(abs(ans-tar)>abs(curr-tar)) ans=curr;
               if(curr<tar) left++;
               else
               right--;
           }
        }
        return ans;
    }
};