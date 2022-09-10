class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> prev={1};
        ans.push_back(prev);
        
        for(int i=2;i<=numRows;i++){
            vector<int> temp(i);
            temp[0]=temp[i-1]=1;
            for(int j=1;j<i-1;j++){
                temp[j]=prev[j-1]+prev[j];
            }
            ans.push_back(temp);
            prev=temp;
        }
        return ans;
    }
};