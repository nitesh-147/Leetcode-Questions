class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>m;
        for(int i=0;i<mat.size();i++){
            int a=0,b=mat[i].size()-1;
            while(a<=b){
                int m=(a+b)/2;
                if(mat[i][m]==0)
                    b=m-1;
                else
                    a=m+1;
            }
            m.push_back(make_pair(a,i));
        }
        sort(m.begin(),m.end());
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(m[i].second);
        }
        return ans;
    }
};