class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        unordered_map<char,int> m;
        for(auto i:p)m[i]++;
        int count=m.size();
        int k=p.size();
        int i=0,j=0;
        while(j<s.size()){
            if(j-i+1<k){
              m[s[j]]--;
              if(m[s[j]]==0) count--;
              j++;
            }
            else{
                m[s[j]]--;
              if(m[s[j]]==0) count--;
              if(count==0) ans.push_back(i);
              m[s[i]]++;
              if(m[s[i]]==1)count++;
              i++;
              j++;
            }
        }
        return ans;
    }
};