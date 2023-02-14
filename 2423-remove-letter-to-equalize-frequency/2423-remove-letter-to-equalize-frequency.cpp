class Solution {
public:
    bool equalFrequency(string word) {
       for(int i = 0; i < word.length(); i++){
            bool check = true;
            map<int, int> freq;
            string temp = word;
            temp.erase(i, 1);
            for(auto i : temp) freq[i]++;
            int last = freq[temp[0]];
            for(auto i : freq) if(i.second != last) check = false;
            if(check == true) return true;
        }
        return false;
      }
    };
