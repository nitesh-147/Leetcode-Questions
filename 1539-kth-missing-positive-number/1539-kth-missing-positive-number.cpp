class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i;
        for(i=0;i<arr.size();i++){
            if(i==0 && k<=arr[i]-0-1)
            return k;
            if(i!=0 && k<=arr[i]-arr[i-1]-1)
            return k+arr[i-1];

            if(i==0)
            k-=(arr[i]-1);
            else
            k-=(arr[i]-arr[i-1]-1);


        }
        return arr[i-1]+k;
    }
};