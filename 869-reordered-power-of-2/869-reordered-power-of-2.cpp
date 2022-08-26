class Solution {
public:
    bool reorderedPowerOf2(int n) {
        if((n&(n-1))==0)
            return true;
        
        vector<string> v;
        
        for(int i=0;i<31;i++){
            v.push_back(to_string((int)pow(2,i)));
            sort(v[i].begin(),v[i].end());
        }
        string s=to_string(n);
        sort(s.begin(),s.end());
        // cout<<s<<endl;
        for(auto i:v)
        {
            // cout<<i<<" ";
            if(i==s)
                return true;
        }
        
      return false;      
    }
};