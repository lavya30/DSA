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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr)
            return nullptr;
        ListNode* current = head;
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;

        while(current!=nullptr){
            if(current->val != val){
                tail->next = current;
                tail = tail->next;
                current =  current->next;
            }
            else{
                current =  current->next;

            }
        }
        tail->next = nullptr;
        
        return dummy->next;
    }
};