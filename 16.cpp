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
    ListNode* oddEvenList(ListNode* head) {
        if (head==NULL || head->next==NULL || head->next->next==NULL) 
             return head;
        ListNode* odd=head, *evenHead=head->next, *even=head->next;
        while (even!=NULL && even->next!=NULL)
        {
            odd=odd->next=even->next;
            even=even->next=even->next->next;
        }
        odd->next=evenHead;
        return head;
        
    }
};
