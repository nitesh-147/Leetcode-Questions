class Solution {
public:
    bool checkSunsequence(string s,string p,vector<bool> vis){
        int i=0,j=0;
        while(i<s.size() && j<p.size()){
            if(!vis[i] && s[i]==p[j]){
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        return j==p.size();
    }
    int maximumRemovals(string s, string p, vector<int>& removable) {
        int low=0,high=removable.size()-1;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            vector<bool> vis(s.size(),false);
            for(int i=0;i<=mid;i++){
                vis[removable[i]]=true;
            }
            
            if(checkSunsequence(s,p,vis)){
                low=mid+1;
                ans=mid;
            }
            else{
                high=mid-1;
            }
        }
        return ans+1;
    }
};