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
    ListNode* partition(ListNode* head, int x) {

        ListNode* lessdummy = new ListNode(-1);
        ListNode* greatdummy = new ListNode(-1);
        ListNode* lesstail = lessdummy;
        ListNode* greattail =  greatdummy;

        ListNode* current = head;

        while(current!=nullptr){
            if(current->val < x){
                lesstail->next = current;
                lesstail =  lesstail->next;
            }
            else{
                greattail->next  = current;
                greattail = greattail->next;
            }
            current = current->next;
        }
        greattail->next = nullptr;
        lesstail->next = greatdummy->next;

        return lessdummy->next;
        
    }
};