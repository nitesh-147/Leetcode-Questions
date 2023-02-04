class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;

        vector<int> f(256,0);
        for(auto i:s1)f[i]++;

        int left=0,right=0;

        while(right<s2.size()){
            f[s2[right]]--;
            right++;

            if(all_of(f.begin(),f.end(),[](int i){return i==0;})){
                return true;
            }

            if(right-left==s1.size()){
                f[s2[left]]++;
                left++;
            }
        }
        return false;

    }
};