
//DSA Sheet by Arsh - Updated 2023
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// https://leetcode.com/submissions/detail/984819031/
//  https://twitter.com/VatsalGupt81731
//#CrackYourInternship
//#CrackYourPlacement 
/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size() ;
        int maxx = INT_MIN ;
        int h = 0, i = 0 , j = n-1 ;
        while( i < j){
            h = min(height[i] , height[j]) ;
            maxx=  max(maxx , h*(j -i) ) ;
            while( height[i] <= h && i< j) i++;
            while( height[j] <= h && i < j) j--;
        }
        return maxx ;
        
    }
};
// @lc code=end

