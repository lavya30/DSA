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
    ListNode* deleteMiddle(ListNode* head) {
        if(nullptr == head || nullptr == head -> next)
            return nullptr;
        int count = 0;
        ListNode* current = head;

        while(current != nullptr){
            count++;
            current = current->next;
        }
        int middle = floor(count / 2);
        count = 0;

        current = head;
        ListNode* prev = nullptr;

        while(count!=middle){
            count++;
            prev = current;
            current = current ->next;
            
        }

        prev->next = current->next;

        return head;


        
    }
};