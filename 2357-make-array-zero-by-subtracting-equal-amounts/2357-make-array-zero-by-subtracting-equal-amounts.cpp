class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int,int> m;
        bool chk=true;
        for(auto i:nums){
            m[i]++;
            if(i==0)
                chk=false;
        }
        if(chk==false)
                return m.size()-1;
        
            else{
                
                 return m.size();
            }
                
    }
};