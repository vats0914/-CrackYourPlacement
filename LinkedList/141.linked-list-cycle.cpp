//DSA Sheet by Arsh - Updated 2023
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// https://leetcode.com/submissions/detail/984819031/
//  https://twitter.com/VatsalGupt81731
//#CrackYourInternship
//#CrackYourPlacement 
/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *s = head , *f= head;
        if(f == NULL || f->next == NULL)
        {
            return false ;
        }
        while(f->next &&f->next->next )
        {
            s = s->next ;
            f = f->next->next ;
            if(s == f )
        {
            return true  ;
        }
        }
        
        
        
        return false ;
    }
};
// @lc code=end

