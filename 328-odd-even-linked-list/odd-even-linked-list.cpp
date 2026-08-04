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
    ListNode* oddEvenList(ListNode* head) {
          if(head == nullptr)
            return nullptr;
        ListNode* current = head;
        ListNode* nex = head->next;
        ListNode* pos = head->next;

      
       
        while(nex != nullptr && nex->next != nullptr){
           current -> next = nex->next;
           current =  current->next;

           nex->next = current->next;
           nex = nex->next;
        }
        current ->next = pos;
        return head;
   

        
   

        
    }
};