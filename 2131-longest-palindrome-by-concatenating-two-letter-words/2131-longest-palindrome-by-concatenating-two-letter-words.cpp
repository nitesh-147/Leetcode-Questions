class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int ans=0;
        unordered_map<string,int> m;
        for(auto i:words) m[i]++;
        bool check=false;int a=0;
        for(auto i:words){
            string j;
            j.push_back(i[1]);
            j.push_back(i[0]);
            // m[i]--;

             if(i==j){
                 a=m[i]/2;
              ans+=m[i]/2;
              m[i]-=2*a;
              if(m[i])
              check= true;
            } 
            else if(m[j]){
                a=min(m[i],m[j]);
                ans+=a;
                m[i]=m[i]-a;
                m[j]-=a;
            }
            
           
        }
        ans*=4;
            if (check) ans+=2;
            return ans;
    }
};