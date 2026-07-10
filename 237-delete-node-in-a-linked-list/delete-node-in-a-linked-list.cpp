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
    void deleteNode(ListNode* node) {

        ListNode* current = node;
        ListNode* prev = node;

        while(current -> next!=nullptr){
            prev =  current;
            current -> val = current -> next -> val;
            current = current -> next;
        }
        prev -> next = nullptr;
        delete current;

        
    }
};