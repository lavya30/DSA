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
        int value = node -> val;

        ListNode* current = node;
        ListNode* prev =  node;

        while(nullptr != current  && nullptr != current-> next){
            prev= current;
            current =  current->next;
            swap(prev ->val , current->val);


        }
        prev ->next=  nullptr;
        delete current;

       
        
        
    }
};