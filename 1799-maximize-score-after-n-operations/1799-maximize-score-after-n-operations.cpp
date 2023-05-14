class Solution {
public:
   int dp[(1<<14)+2] ;
    int n ;
    int f(vector<int>&nums , int mask , int idx ) {
        if(dp[mask] != -1 ) return dp[mask] ;
        
        int ans = 0 ;

        for(int i = 0 ; i<  n ; ++i ){
            int u = (mask>>i) & 1 ;
            if(u == 0 ) continue ; 
            u = nums[i] ;

            for(int j = i+1 ; j< n ; ++j ){
                int v = (mask>>j) & 1 ;
                if(v == 0 ) continue ; 
                v = nums[j] ;

                int temp = idx * __gcd(u , v) ;
                int mask1 = ~(1<<i) ;
                int mask2 = ~(1<<j) ;
                int ext = f( nums , (mask & mask1) & mask2 , idx + 1 ) ;
                ans = max(ans , temp + ext ) ;
            }
        }

        dp[mask] = ans ;
        return ans ; 
    }

    int maxScore(vector<int>& nums) {
        n = nums.size() ;
        memset(dp , -1 , sizeof(dp) ) ;
        dp[0] = 0 ;
        return f(nums , (1<<n) -1 , 1 ) ;
    }
};