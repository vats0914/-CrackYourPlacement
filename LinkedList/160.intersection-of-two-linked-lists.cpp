//DSA Sheet by Arsh - Updated 2023
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// https://leetcode.com/submissions/detail/984819031/
//  https://twitter.com/VatsalGupt81731
//#CrackYourInternship
//#CrackYourPlacement 
/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *headC = headA, *headD= headB ;
        bool a = true ,b = true ;
        while(headC != headD && headC)
        {
            headC = headC->next ;
            if(!headC && a){headC= headB ;a= false ;}
            headD = headD->next ;
            if(!headD && b){headD= headA ; b =false; }
        }
        if(headC == headD) return headC ;
        return NULL ;   
    }
};
// @lc code=end

