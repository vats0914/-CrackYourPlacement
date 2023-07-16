//DSA Sheet by Arsh - Updated 2023
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// https://leetcode.com/submissions/detail/984819031/
//  https://twitter.com/VatsalGupt81731
//#CrackYourInternship
//#CrackYourPlacement 
/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int , int> mp ;
        vector<int> ans ;
        int cnt = 0 ;
        for(int i = 0 ; i < nums.size() ; i++ )
        {
            if(mp.find(target - nums[i]) != mp.end()){ ans.push_back(mp[target - nums[i]]) ; ans.push_back(i) ;}
            mp[nums[i]] =i ;
        }
        return ans ;
    }
};
// @lc code=end

