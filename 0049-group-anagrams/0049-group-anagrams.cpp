class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         vector<pair<string,string>> v;
        for(auto i:strs){
            string t=i;
            sort(t.begin(),t.end());
            v.push_back({t,i});
        }
        sort(v.begin(),v.end());
        vector<vector<string>> ans;
        vector<string> temp;
        for(int i=0;i<v.size();i++){
            if(i!=0 && v[i].first!=v[i-1].first){
                ans.push_back(temp);
                temp.clear();
            }
            string a=v[i].second;
            temp.push_back(a);
        }
        ans.push_back(temp);
        return ans;
    }
};