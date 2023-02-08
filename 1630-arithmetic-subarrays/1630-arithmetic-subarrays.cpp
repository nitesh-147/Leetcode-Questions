class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> a;
        for(int i=0;i<l.size();i++){
            vector<int> temp(nums.begin()+l[i],nums.begin()+r[i]+1);
            sort(temp.begin(),temp.end());

            int cd=temp[1]-temp[0];

            bool ans=true;
            for(int i=1;i<temp.size()-1;i++){
                if(temp[i+1]-temp[i]!=cd){
                    ans=false;
                    break;
                }
            }
           a.push_back(ans);
        }
        return a;
    }
};