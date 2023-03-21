class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int mx=INT_MIN;
        unordered_map<char,int> m;
        for(auto i:tasks){
            m[i]++;
            mx=max(m[i],mx);
        }
        int mx_count=0;
        for(auto i:m){
            if(i.second==mx) mx_count++;
        }
        int t1=mx+(mx-1)*n+mx_count-1;
        int size=tasks.size();
        int ans = max(t1,size);
        return ans;
    }
};