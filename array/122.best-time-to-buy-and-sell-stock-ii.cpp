//DSA Sheet by Arsh - Updated 2023
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// https://leetcode.com/submissions/detail/984819031/
//  https://twitter.com/VatsalGupt81731
//#CrackYourInternship
//#CrackYourPlacement 
/*
 * @lc app=leetcode id=122 lang=cpp
 *
 * [122] Best Time to Buy and Sell Stock II
 */

// @lc code=start
class Solution {
public:
    int func(int ind ,int b ,int n , vector<int> s , vector<vector<int>>& dp){
        if(ind == n) return 0 ;
        if(dp[ind][b] != -1) return dp[ind][b] ;
        long profit = 0;
        if(b)
        {
            profit = max(-s[ind] + func(ind+1 , 0 , n , s, dp) , 
            0 + func(ind+1 , 1 , n , s, dp)) ;
        }
        else
        {
            profit = max(s[ind] + func(ind+1 , 1 ,n , s, dp) ,
             func(ind+1 , 0 , n , s, dp)) ;
        }
        return dp[ind][b] = profit ; 
    }

    int maxProfit(vector<int>& prices) {
        int n = prices.size() ;
        vector<vector<int>> dp(n +1 ,vector<int>(2 , -1));
        dp[n][0] = dp[n][1]= 0 ;
        for(int ind = n-1 ; ind >= 0 ; ind--)
        {
            for(int j = 0 ; j < 2 ; j++)
            {
                int profit = 0 ;
                if(j == 0)
                {
                   profit= max(-prices[ind] +dp[ind+1][1] , dp[ind+1][0] )  ; 
                }
                else{
                    profit = max( dp[ind+1][1] , prices[ind] + dp[ind+1][0]) ;
                }
                dp[ind][j] = profit ;
            }
            
        }
        return dp[0][0]  ;   
    }
};
// @lc code=end

