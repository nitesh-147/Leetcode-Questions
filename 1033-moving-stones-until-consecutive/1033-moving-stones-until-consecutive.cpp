class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
       vector<int> v;
        v.push_back(a);
                v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end());
        
        vector<int> ans;
        // ans.push_back(min(v[1]-v[0]-1,1)+min(v[2]-v[1]-1,1));
        int x=v[1]-v[0]-1,y=v[2]-v[1]-1;
        int t=(x<1 && y<1)?0:((x==0&&y>0)||(x>0&&y==0))?1:(x==1||y==1)?1:2;
        ans.push_back(t);
        ans.push_back(v[1]-v[0]-1+v[2]-v[1]-1);
        
        return ans;

        
    }
};