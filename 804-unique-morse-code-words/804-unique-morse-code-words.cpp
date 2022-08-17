class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
       string a[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<string,int> m;
       for(int i=0;i<words.size();i++){
           string temp="";
           for(auto j:words[i]){
               temp+=a[(int)j-97];
           }
           m[temp]++;
       }
        
        
        
        return m.size();
    }
};