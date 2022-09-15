class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        priority_queue<int> p;
        int sum=0,sum1=0;
        for(auto i:nums){
            sum+=i;
             p.push(i);
        }
        vector<int> ans;
           while(sum1<=sum){
               sum1+=p.top();
               sum-=p.top();
               ans.push_back(p.top());
               
               p.pop();
           }
        return ans;
    }
};