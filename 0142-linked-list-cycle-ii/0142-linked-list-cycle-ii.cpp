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
    ListNode *detectCycle(ListNode *head) {
        
        ListNode *fast = head, *slow = head;
        while(fast && fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow)
                break;
        }
        if(fast == NULL || fast->next == NULL || fast->next->next == NULL)
            return NULL;
        fast = head;
        while(fast!=slow){
            fast = fast->next;
            slow = slow->next;
        }
        
        return fast;
    }
};