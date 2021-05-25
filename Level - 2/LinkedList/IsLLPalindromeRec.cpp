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
    bool isPalindromeHelper(struct ListNode **left, struct ListNode *right)
    {
        if(right == NULL)
            return true;
        else 
        {
            bool rest = isPalindromeHelper(left, right->next);
            if(rest == true)
            {
                if((*left)->val == right->val)
                {
                    (*left) = (*left)->next;
                    return true;
                }
                else
                    return false;
            }
            else
                return false;
        }
    }
    bool isPalindrome(ListNode* head) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        ListNode *left = head;
        ListNode *right = head;
        return isPalindromeHelper(&left, right);
    }
};
