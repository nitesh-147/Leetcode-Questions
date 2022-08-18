class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> m;
        for(auto i:arr)
            m[i]++;
        vector<int> v;
        for(auto i:m)
            v.push_back(i.second);
        sort(v.begin(),v.end(),greater<int>());
        int n=arr.size(),x=(n)/2;
        int c=0;
        for(auto i:v){
            c++;
            n-=i;
            if(n<=x)
                break;
        }
        return c;
    }
};