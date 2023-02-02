class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> m;
        for (int i=0; i<order.size(); i++){
            m[order[i]]= i;
        }
        for (int i=1; i<words.size(); i++){
            string w1= words[i-1]; string w2= words[i];
            for (int i=0; i<w1.size(); i++){
                if (i >= w2.size())return false;
                if (m[w1[i]] < m[w2[i]])break;
                if (m[w1[i]] > m[w2[i]]){return false;}
            }
        }
        return true;
    }
};