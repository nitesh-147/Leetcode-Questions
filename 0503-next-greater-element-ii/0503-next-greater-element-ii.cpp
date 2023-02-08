class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> s;
        for(int i=nums.size()-2;i>=0;i--){
            s.push(nums[i]);
        }
        for(int i=nums.size()-1;i>=0;i--){
            while(!s.empty() && s.top()<=nums[i]) s.pop();
            
            int x=nums[i];
            
            if(!s.empty()) nums[i]=s.top();
            else nums[i]=-1;
            
            s.push(x);
        }
        
        return nums;
    }
};