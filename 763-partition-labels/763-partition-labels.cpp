class Solution {
public:
    vector<int> partitionLabels(string s) {
       int loc,i,j,x;
       vector<int> ans;
        
       for(i=0;i<s.size();i++){
            loc=s.find_last_of(s[i]);
            for(j=i+1;j<loc;j++){
                x=s.find_last_of(s[j]);
                loc=max(loc,x);
            }
            ans.push_back(loc-i+1);
            i=loc;
        }
        
        return ans;
    }
};