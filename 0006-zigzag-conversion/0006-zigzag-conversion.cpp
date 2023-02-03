class Solution {
public:
    string convert(string s, int numRows) {
        string ans;
        for(int i=1;i<=numRows;i++){
            if(i==1||i==numRows){
                   for(int j=i;j<=s.size();){
                         ans.push_back(s[j-1]);
                         if(numRows==1) j++;
                         else
                         j=j+2*(numRows-1);
                   }
            }
            else{
                for(int j=i;j<=s.size();j+=(2*(i-1))){
                         ans.push_back(s[j-1]);
                         j+=(2*(numRows-i));
                         if(j<=s.size()) ans.push_back(s[j-1]);
                   }
            }
        }
        return ans;
    }
};