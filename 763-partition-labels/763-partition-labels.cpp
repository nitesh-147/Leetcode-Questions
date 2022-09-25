class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> l;
        for(int i=0;i<s.size();i++)
            l[s[i]]=i;
        // for(int i=s.size()-1;i>=0;i--)
        //     f[s[i]]=i;
        
        int loc=0;
        
        vector<int> ans;
        
        for(int i=0;i<s.size();i++){
            
            int loc=l[s[i]];
            for(int j=i+1;j<loc;j++){
                loc=max(loc,l[s[j]]);
            }
            ans.push_back(loc-i+1);
            i=loc;
        }
        
        return ans;
    }
};