class Solution {
public:
    vector<int> partitionLabels(string s) {
        // unordered_map<char,int> l;
        // for(int i=0;i<s.size();i++)
        //     l[s[i]]=i;
       
        
        int loc=0;
        
        vector<int> ans;
        
        for(int i=0;i<s.size();i++){
            
            int loc=s.find_last_of(s[i]);
            for(int j=i+1;j<loc;j++){
                int x=s.find_last_of(s[j]);
                loc=max(loc,x);
            }
            ans.push_back(loc-i+1);
            i=loc;
        }
        
        return ans;
    }
};