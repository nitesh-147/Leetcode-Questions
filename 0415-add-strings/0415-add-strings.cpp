class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans="";
        int i=num1.size()-1,j=num2.size()-1;
        int c=0;
        while(i>=0 && j>=0){
            int a=num1[i]-'0';
            int b=num2[j]-'0';
            int res=(a+b+c)%10;
            c=(a+b+c)/10;
            ans=to_string(res)+ans;
            i--;
            j--;
        }
        while(i>=0){
             int a=num1[i]-'0';
            // int b=num2[j]-'0';
            int res=(a+c)%10;
            c=(a+c)/10;
            ans=to_string(res)+ans;
            i--;
            // j--;
        }
         while(j>=0){
            //  int a=num1[i]-'0';
            int b=num2[j]-'0';
            int res=(b+c)%10;
            c=(b+c)/10;
            ans=to_string(res)+ans;
            // i--;
            j--;
        }
        if(c==1)
        ans="1"+ans;

        return ans;
    }
};