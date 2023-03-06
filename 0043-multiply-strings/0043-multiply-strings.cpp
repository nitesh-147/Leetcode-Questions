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
    string multiply(string num1, string num2) {
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        string ans="";
        for(int i=0;i<num2.size();i++){
            string temp;
            int c=0;
            int b=num2[i]-'0';
            for(int j=0;j<num1.size();j++){
                int a=num1[j]-'0';
                int res=a*b+c;
                temp=to_string(res%10)+temp;
                c=res/10;
            }
            if(c!=0){
                temp=to_string(c)+temp;
            }
            for(int k=0;k<i;k++){
                temp.push_back('0');
            }
            ans=addStrings(ans,temp);
        }
        while(ans[0]=='0'&&ans.size()>1)ans=ans.substr(1);
        return ans;
    }
};