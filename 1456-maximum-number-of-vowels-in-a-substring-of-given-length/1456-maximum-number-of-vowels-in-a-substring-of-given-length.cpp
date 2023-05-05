class Solution {
public:
    bool isVowel(char a){
        return a=='a' || a=='e' || a=='i' || a=='o' || a=='u';
    }
    int maxVowels(string s, int k) {
        int i=0,j=0,count=0,ans=0;
        while(j<s.size()){
            if(j-i+1<k){
                if(isVowel(s[j])) count++;
                j++;
            }
            else{
                if(isVowel(s[j])) count++;
                ans=max(ans,count);
                if(isVowel(s[i])) count--;
                i++;
                j++;
            }
        }
        return ans;
    }
};