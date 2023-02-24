class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int mn=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&1) nums[i]*=2;
            mn=min(mn,nums[i]);
        }
        priority_queue<int> p(nums.begin(),nums.end());
        int ans=(p.top()-mn);
        while(p.top()%2==0){
            int x=p.top();
            p.pop();
            p.push(x/2);
            mn=min(mn,x/2);
            ans=min(ans,p.top()-mn);
        }
        return ans;
    }
};