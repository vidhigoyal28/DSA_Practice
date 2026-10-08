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
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return ;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!= NULL && fast -> next !=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* second = slow->next;
        slow->next = NULL;

        ListNode* prev = NULL;
        ListNode* curr = second;
        while(curr != NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev =curr;
            curr = next;
        }
        ListNode* p1 = head;
        ListNode* p2 = prev;
        while(p2 != NULL){
            ListNode* n1 = p1 ->next;
            ListNode* n2 = p2->next;
            p1->next = p2;
            p2->next = n1;
            p1 =n1;
            p2 =n2;

        }
    }
};