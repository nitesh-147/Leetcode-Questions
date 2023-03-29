class Solution {
public:
    int maxSatisfaction(vector<int>& s) {
        sort(s.begin(),s.end());
        int sn=0,sp=0;
        for(auto i:s){
            if(i<0){
                sn+=abs(i);
            }
            else{
                sp+=i;
            }
        }
        int ans=0;
        int id=1;
        for(auto i:s){
            if(sn<=sp){
                ans+=((id++)*i);
            }
            else{
                sn-=abs(i);
            }
        }
        return ans;
    }
};