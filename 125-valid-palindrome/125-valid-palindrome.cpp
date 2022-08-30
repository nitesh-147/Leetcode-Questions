class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(auto i:s){
            if((i>=65 && i<=90)||(i>=97&&i<=122))
                a.push_back(tolower(i));
            if(i>='0'&&i<='9')
                a.push_back(i);
        }
        string b=a;
        reverse(a.begin(),a.end());
        
        return b==a;
    }
};