//DSA Sheet by Arsh - Updated 2023
// https://leetcode.com/problems/move-zeroes/
// https://leetcode.com/submissions/detail/984812628/
//  https://twitter.com/VatsalGupt81731
//#CrackYourInternship
//#CrackYourPlacement

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a = 0 , b = 0;
        int n = nums.size() ;
        for(int i = 0 ; i < n ; i++)
        {
            if(nums[i] != 0)
            {
                nums[b++]=  nums[i] ;
            }
        }
        for(; b <n ; b++)
        {
            nums[b] = 0 ;
        }
    }
};
