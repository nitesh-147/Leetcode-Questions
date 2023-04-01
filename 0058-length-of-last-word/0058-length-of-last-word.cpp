class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0,ans=0;
        for(auto i:s){
           if(i==' '){
               if(c>0)
                   ans=c;
                c=0;
           }
              
            else
                c++;
        }
        return (c>0)?c:ans;
    }
};