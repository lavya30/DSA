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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr)
            return head;

        ListNode* current = head;
        ListNode* prev = head;
        int i = 1;
        while(i<=n){
            current = current->next;
            i++;
        }
        if(current == nullptr)
            return head->next;
        while(current->next!=nullptr){
            current = current -> next;
            prev =  prev -> next;
        }
        prev->next =  prev->next->next;

        return head;

        
        
    }
};