//DSA Sheet by Arsh - Updated 2023
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// https://leetcode.com/submissions/detail/984819031/
//  https://twitter.com/VatsalGupt81731
//#CrackYourInternship
//#CrackYourPlacement 
/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *head1 = head ;
        if( !(head && head->next) )
        {
            return head ;
        } 
        while(head1 && head1->next)
        {
            if(head1->val == head1->next->val)
            {
                head1->next = head1->next->next ;   
            } 
            if(head1->next && head1->val != head1->next->val) {head1 =head1->next ;} 
        }
        return head ;        
    }
};
// @lc code=end

