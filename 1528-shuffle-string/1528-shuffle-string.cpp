class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
       for(int i=0;i<s.size()-1;){
           if(i==indices[i])
               i++;
           else{
               swap(s[i],s[indices[i]]);
               swap(indices[i],indices[indices[i]]);
           }
       }
        return s;
    }
};