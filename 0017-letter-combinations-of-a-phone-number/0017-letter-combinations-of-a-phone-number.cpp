class Solution {
public:
vector<string> v={"0","0","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void helper(string s,vector<string> &ans,string temp="",int i=0){
     if(i==s.length()){
        // cout<<temp<<endl;
        ans.push_back(temp);
        return;
    }
    int x=s[i]-'0';
    for(auto j:v[x]){
        helper(s,ans,temp+j,i+1);
    }
}
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return {};
    vector<string> ans;
    helper(digits,ans);
    
    return ans;
    }
};