class Solution {
public:
    void count_set_bits(int i,vector<int> &v){
    int p=0;
    while(i!=0){
        if(i&1)
        v[p]++;
        p++;
        i>>=1;
    }
}
    int totalHammingDistance(vector<int>& nums) {
         vector<int> v(32,0);
    for(auto i:nums){
        count_set_bits(i,v);
    }
    
    int ans=0;
    for(int i=0;i<32;i++){
        ans+=(v[i]*(nums.size()-v[i]));
    }
    return ans;
    }
};