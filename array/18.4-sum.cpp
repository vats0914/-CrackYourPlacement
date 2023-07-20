//DSA Sheet by Arsh - Updated 2023
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// https://leetcode.com/submissions/detail/984819031/
//  https://twitter.com/VatsalGupt81731
//#CrackYourInternship
//#CrackYourPlacement 
/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
            vector<vector<int>> ans ;
            int n = nums.size() ;
            if(n<4)  return ans;
            sort(nums.begin() , nums.end()) ;
            for(int i = 0; i  < n-3 ; i++)
            {   
                if(i > 0 && nums[i] == nums[i-1])continue;
                long long target2 = target - nums[i] ;
                // if(nums[i]+nums[i+1]+nums[i+2]+nums[i+3]>target) break;
                // if(nums[i]+nums[n-3]+nums[n-2]+nums[n-1]<target) continue;
                for(int j = i+1 ; j < n-2 ; j++)
                {   
                    if(j>i+1 && nums[j] == nums[j-1])continue ;
                    long long target3 = target2 - nums[j] ;
                    // if(nums[i]+nums[j]+nums[j+1]+nums[j+2]>target) break;
                    // if(nums[i]+nums[j]+nums[n-2]+nums[n-1]<target) continue;
                    int l = j+1 , r= n-1;
                    while(l < r)
                    {
                        long long sum = nums[l] + nums[r] ; 
                        if( sum  < target3)l++ ;
                        else if( sum > target3) r-- ;
                        else{
                            ans.push_back(vector<int>{nums[i] , nums[l] , nums[r] ,  nums[j] }) ;
                            do{l++;}while(nums[l] == nums[l-1] && l <r) ;
                            do{r--;}while(nums[r] == nums[r+1] && l <r) ;
                            
                        }
                        
                    } 
                }
            }
            return ans ;
    }
};
// @lc code=end

