class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        bool allowed=true;
        for(int i=0;i<flowerbed.size();i++){
           if(flowerbed[i]==1){
               allowed=false;
           }
            else{
                if(allowed && (i==flowerbed.size()-1 || (i+1<flowerbed.size() && flowerbed[i+1]!=1))){
                    n--;
                }
                allowed=!allowed;
            }
        }
        return n<=0;
    }
};