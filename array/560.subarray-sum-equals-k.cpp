//DSA Sheet by Arsh - Updated 2023
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// https://leetcode.com/submissions/detail/984819031/
//  https://twitter.com/VatsalGupt81731
//#CrackYourInternship
//#CrackYourPlacement 
/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int l = 0 , r = 0 , n= nums.size();
        vector<int> pre(n,0) ;
        for(int i = 0 ; i < n ; i++)
        {
            l+= nums[i] ;
            pre[i] = l ;
        }
        unordered_map<int, int> m ;
        for(int i = 0 ; i < n ; i++)
        {
            if(pre[i] == k )r++ ;

            if(m.find(pre[i] -k) != m.end() )
            {
                r += m[pre[i] - k] ;
            }
           
            m[pre[i]]++;
        }
        return r ;
        

    }
};
// @lc code=end

