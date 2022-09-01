class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
  vector<int> ans;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> p;
    for (auto i : arr)
    {
        p.push({abs(i - x), i});
    }
    while (k--)
    {
        pair<int, int> temp = p.top();
        p.pop();
        ans.push_back(temp.second);
    }
    sort(ans.begin(),ans.end());
    return ans;
    }
};