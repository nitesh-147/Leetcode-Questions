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
               int a=p.top();
               sum1+=a;
               sum-=a;
               ans.push_back(a);
               
               p.pop();
           }
        return ans;
    }
};