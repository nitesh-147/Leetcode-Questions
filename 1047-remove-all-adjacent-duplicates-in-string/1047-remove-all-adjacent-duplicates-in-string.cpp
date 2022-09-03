class Solution {
public:
    string removeDuplicates(string st) {
        stack<char> s;
        for(auto i:st){
            if(s.size()==0||i!=s.top())
                s.push(i);
            else 
                s.pop();
            
        }
        // cout<<s.size();
        string ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
            
        reverse(ans.begin(),ans.end());
        return ans;
    }
};