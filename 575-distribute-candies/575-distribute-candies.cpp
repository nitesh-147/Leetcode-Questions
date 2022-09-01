class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_map<int, int> m;
    for (auto i : candies)
        m[i]++;

    if (m.size() <= candies.size() / 2)
        return m.size();

    else
        return candies.size() / 2;

    }
};