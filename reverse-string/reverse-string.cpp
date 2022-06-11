class Solution {
public:
 int i=0;
    void reverseString(vector<char>& s) {
        if(i>=s.size()/2)
            return;
        swap(s[i],s[s.size()-1-i]);
        i++;
        reverseString(s);
    }
};