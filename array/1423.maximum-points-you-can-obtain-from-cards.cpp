//DSA Sheet by Arsh - Updated 2023
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// https://leetcode.com/submissions/detail/984819031/
//  https://twitter.com/VatsalGupt81731
//#CrackYourInternship
//#CrackYourPlacement 
/*
 * @lc app=leetcode id=1423 lang=cpp
 *
 * [1423] Maximum Points You Can Obtain from Cards
 */

// @lc code=start
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size() ;
        int ans = INT_MIN , sum = 0;
        for(int i = 0 ; i  < k ; i++)
        {
            sum += cardPoints[i] ;
        }
        ans = sum ;
        for(int i = 0 ; i < k; i++)
        {
            sum += cardPoints[n-1 - i] - cardPoints[k-1-i] ; 
            ans = max(ans,sum) ;
        }
        return ans ;
    }
};
// @lc code=end

