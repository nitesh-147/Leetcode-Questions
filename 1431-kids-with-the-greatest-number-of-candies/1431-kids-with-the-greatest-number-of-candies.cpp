class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int mx=*max_element(candies.begin(),candies.end());
        
        for(int i=0;i<candies.size();i++)
        {
           bool x= ((candies[i]+extraCandies)>=mx)? true:false;
            ans.push_back(x);
        }
        
        return ans;
    }
};