class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto i:nums)
            m[i]++;
        priority_queue<int> p;
        for(auto i:m)
            p.push(i.first);
        if(p.size()<3){
            return p.top();
        }
        
        
        else{
            p.pop();p.pop();
            return p.top();
        }
        
    }
};