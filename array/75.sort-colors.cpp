//DSA Sheet by Arsh - Updated 2023
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// https://leetcode.com/submissions/detail/984819031/
//  https://twitter.com/VatsalGupt81731
//#CrackYourInternship
//#CrackYourPlacement 
/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) { 
        int l = 0,  m = 0 ,  r = nums.size() -1 ;
        while(m <= r)
        {
            if(nums[m] == 0)
            {
                swap(nums[l] , nums[m]) ;l++ ; m++ ;
            }
            else if(nums[m] ==1) m++ ;
            else {
                swap(nums[m] , nums[r]) ;
                r-- ;
            }
            
        }
    }
    
};
// @lc code=end

