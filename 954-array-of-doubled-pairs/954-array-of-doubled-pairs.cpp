class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        
        unordered_map<int,int> m;
        
        for(auto i:arr)
            m[i]++;
        sort(arr.begin(),arr.end());
        
        for(auto i: arr){
            if(m[i]){
                if(m[2*i])
                {
                    
                    m[i]--;
                    m[2*i]--;
                }
                else if( i%2==0 && m[i/2]){
                    m[i]--;
                    m[i/2]--;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};