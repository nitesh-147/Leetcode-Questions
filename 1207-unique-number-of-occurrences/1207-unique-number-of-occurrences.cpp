class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
//        int freq[2001]={0};
//         for(auto i:arr){
//             freq[i+1000]++;
//         }
        
//         for(auto i=0;i<2000;i++){
//             if(freq[i] && freq[i]==freq[i+1]){
//                 return false;
//             }
//         }
        
//         return true;
        
        unordered_map<int,int> freq;
        
        for(auto i:arr){
            freq[i]++;
        }
        
        unordered_map<int,int> freq2;
        
        for(auto i:freq){
            freq2[i.second]++;
        }
        
        return freq.size()==freq2.size();
    }
};