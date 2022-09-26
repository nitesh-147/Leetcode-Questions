class Solution {
public:
static bool comp(pair<int,int> p1,pair<int,int> p2){
    if(p1.second!=p2.second)
    return (p1.second<p2.second);
    else
    return p1.first<p2.first;
}
vector<int> sortByBits(vector<int> arr) {
        vector<pair<int,int>> count;
        for(auto i:arr){
            int c=0,n=i;
            while(n>0){
                n= n&(n-1);
                c++;
            }
            count.push_back({i,c});
        }
        
        sort(count.begin(),count.end(),comp);
        for(int i=0;i<arr.size();i++){
            arr[i]=count[i].first;
        }
        return arr;
}
};