class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       string a="";
        int m=0,n=0;
        for(int i=0;i<word1.size()+word2.size();i++)
        {
            if(m<word1.length()&&(i%2==0||n>=word2.length()))
                a+=word1[m++]; 
            else
                a+=word2[n++];
        }
        return a;
    }
};