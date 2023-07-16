//DSA Sheet by Arsh - Updated 2023
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// https://leetcode.com/submissions/detail/984819031/
//  https://twitter.com/VatsalGupt81731
//#CrackYourInternship
//#CrackYourPlacement 
/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size() ;
        int i= 0 , j =0, k = 0 ;
        sort(nums.begin(), nums.end()) ;
        vector<vector<int>> ans ;
        
        for(int i = 0 ; i < n ;i++){
            if(i > 0 && nums[i] == nums[i-1]) continue ;
            j = i+1 ;
            k = n-1 ;
            while(j < k ){
                int sum = nums[i] + nums[j] + nums[k] ;
                if(sum <0) j++ ;
                else if(sum >0)k-- ;
                else{
                    vector<int> temp = {nums[i] , nums[j] , nums[k]} ;
                    ans.push_back(temp) ;
                    j++ ; k-- ;
                    while( j <k && nums[j] == nums[j-1]) j++;
                    while(j < k && nums[k] == nums[k+1]) k-- ;

                }
            }
            
        }
        return ans; 
    }
};
// @lc code=end

