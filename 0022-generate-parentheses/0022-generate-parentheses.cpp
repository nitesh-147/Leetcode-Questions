class Solution {
public:
void brac(int n,int t,vector<string> &ans,string temp="",int o=0,int c=0){
    if(t==0){
        ans.push_back(temp);
        return;
    }
    if(o<n)
    brac(n,t-1,ans,temp+'(',o+1,c);
    if(c<o)
    brac(n,t-1,ans,temp+')',o,c+1);
}
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        brac(n,2*n,ans);
        return ans;
    }
};