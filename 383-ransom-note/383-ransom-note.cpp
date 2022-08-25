class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> n;
        // for(auto i:ransomNote)
        //     m[i]++;
        for(auto i:magazine)
            n[i]++;
        
        for(auto i:ransomNote){
            if(n[i]==0)
                return false;
            
            n[i]--;
        }
        return true;
    }
};