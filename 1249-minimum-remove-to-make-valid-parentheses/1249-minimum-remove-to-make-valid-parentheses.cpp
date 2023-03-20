class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string t;
        stack<char> st;
        for(auto i:s){
            if(i=='('){
               st.push(i);
               t.push_back(i);
            }
            else if(i==')'){
                if(!st.empty()){
                   st.pop();
                   t.push_back(i);
                }
            }
            else{
                t.push_back(i);
            }
        }
        int n=st.size();
        string ans;
        for(int i=t.size()-1;i>=0;i--){
            if(t[i]=='('){
                 if(n!=0){
                    n--;
                 }
                 else{
                    ans.push_back(t[i]);
                 }
            }
            else{
                ans.push_back(t[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};