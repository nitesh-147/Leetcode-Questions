class Solution {
public:
    int countPoints(string rings) {
        int ans=0;
        for(int i=0;i<=9;i++){
            string a="R"+to_string(i);
             string b="G"+to_string(i);
             string c="B"+to_string(i);
            if((rings.find(a)+1)&&(rings.find(b)+1)&&(rings.find(c)+1))
                ans++;
        }
        return ans;
    }
};