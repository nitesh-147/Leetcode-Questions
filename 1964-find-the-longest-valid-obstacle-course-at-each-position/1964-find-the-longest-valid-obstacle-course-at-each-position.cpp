class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        vector<int> a;
        vector<int> ans;
        for (auto x : obstacles){
            int i = upper_bound(a.begin(), a.end(), x) - a.begin();
            if (i == a.size())
                a.push_back(x);
            else
                a[i] = x;
            ans.push_back(i + 1);
        }
    return ans;
    }
};