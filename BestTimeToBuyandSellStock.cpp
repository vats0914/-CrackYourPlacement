//DSA Sheet by Arsh - Updated 2023
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// https://leetcode.com/submissions/detail/984819031/
//  https://twitter.com/VatsalGupt81731
//#CrackYourInternship
//#CrackYourPlacement
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff = 0, minn = prices[0], n = prices.size() ;
        for(int i = 1; i < n ; i++)
        {
            diff = max(prices[i] - minn , diff) ;
            minn = min(prices[i] , minn) ;
        }   
        return diff ;
    }
};
