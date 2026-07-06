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
    ListNode* reverseList(ListNode* head) {
        // if(head == nullptr)
        //     return nullptr;
        // ListNode* dummy = new ListNode(-1);
        // ListNode* tail = dummy;

        // ListNode*  current = head;
        // ListNode*  prev =  head;
        // while(head->next!=nullptr){
        //     while(current->next!=nullptr){
        //         prev =  current;
        //         current =  current->next;

        //     }
            
        //     tail->next = current;
        //     prev->next = nullptr;
          

        //     tail = tail->next;

        //     current = head;
        //     prev =  head;

        // }
        // tail->next = head;
 
        // head->next = nullptr;
        // return dummy->next;
        
        ListNode*  current = head;
        ListNode*  prev =  nullptr;

        while(current!=nullptr){
            ListNode* next_node =  current->next;
            current->next =  prev;
            prev = current;
            current = next_node;


        }
        return prev;

    }
};