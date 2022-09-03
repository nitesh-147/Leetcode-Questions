class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st,ts;
        for(auto i:s){
            if(i=='#'){
                if(st.size())
                    st.pop();
            }
                
            else
                st.push(i);
        }
            
        for(auto i:t){
            if(i=='#'){
                if(ts.size())
                ts.pop();
            }
                
            else
                ts.push(i);
        }
        
        if(st.size()!=ts.size())
            return false;
        while(!st.empty()){
            if(st.top()!=ts.top())
                return false;
            st.pop();ts.pop();
        }
        return true;
    }
};