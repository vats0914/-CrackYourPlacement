//DSA Sheet by Arsh - Updated 2023
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// https://leetcode.com/submissions/detail/984819031/
//  https://twitter.com/VatsalGupt81731
//#CrackYourInternship
//#CrackYourPlacement 
/*
 * @lc app=leetcode id=974 lang=cpp
 *
 * [974] Subarray Sums Divisible by K
 */

// @lc code=start
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size() ;
        unordered_map<int , int> mp ;
        int prev = 0, ans = 0 ;
        mp[0] =1 ;
        for(int i = 0 ; i < n ; i++)
        {
            prev += nums[i] ;
            prev = prev%k ;
            if(prev < 0 ) prev+= k ;
            if(mp.find(prev) != mp.end())
            {
                ans += mp[prev] ;
                mp[prev]++ ;
            }
            else
            {
                mp[prev] = 1;
            }
        }
        return ans ;
    }
};
// @lc code=end

