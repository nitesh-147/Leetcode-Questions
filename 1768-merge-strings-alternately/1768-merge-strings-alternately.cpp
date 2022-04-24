class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       string ans;//declaring String ans to store the resulting answer
        int m=0,n=0;
        for(int i=0;i<word1.size()+word2.size();i++)
        {
            if(m<word1.length()&&(i%2==0||n>=word2.length())){//if m is less than length of word1 and i is even indexed or word 2  is fully traversed.
                ans+=word1[m++]; 
            }
            else
                ans+=word2[n++];
        }
        return ans;
    }
};