//DSA Sheet by Arsh - Updated 2023
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// https://leetcode.com/submissions/detail/984819031/
//  https://twitter.com/VatsalGupt81731
//#CrackYourInternship
//#CrackYourPlacement 
/*
 * @lc app=leetcode id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 */

// @lc code=start
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size() ;
        int s = nums[0] , f = nums[0] ;
        do{
            s= nums[s] ;
            f = nums[nums[f]] ;
        }while(s != f);

        f = nums[0] ;
        while(s!= f)
        {
            s = nums[s] ;
            f = nums[f]; 
        }
        return s ;
    }
};
// @lc code=end

