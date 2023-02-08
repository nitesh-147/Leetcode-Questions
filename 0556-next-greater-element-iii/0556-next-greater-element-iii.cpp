class Solution {
public:
    int nextGreaterElement(int n) {
        string s=to_string(n);
        // stack<pair<char,int>> st;
        bool flag=false;
        int i;
        for(i=s.size()-1;i>=0;i--){
            // while(!st.empty() && st.top().first<=s[i]) st.pop();
            int k=-1;
            char c='9';
            bool fl=false;
            for(int j=i+1;j<s.size();j++){
                if(s[j]>s[i]){
                    fl=true;
                    if(c>=s[j]){
                        k=j;
                        c=s[j];
                    }
                }
            }
            
            if(fl){
                swap(s[i],s[k]);
                sort(s.begin()+i+1,s.end());
                break;
            }
            // st.push({s[i],i});
        }
        if(i!=-1){
            if(s.size()<=9) return stoi(s);
            else if(s<="2147483647") return stoi(s);
            else return -1;
        }
         return -1;
    }
};