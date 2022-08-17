class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> m;
        for(auto i:deck)
            m[i]++;
        vector<int> v;
        for(auto i:m)
            v.push_back(i.second);
        
        sort(v.begin(),v.end());
        
        if(v[0]<2)
            return false;
        else{
           if(v.size()==1)
               return true;
            else{
                int g=v[0];
                for(auto i:v)
                    g=gcd(g,i);
                
                if(g>=2)
                    return true;
                else
                    return false;
            }
        }
    }
};