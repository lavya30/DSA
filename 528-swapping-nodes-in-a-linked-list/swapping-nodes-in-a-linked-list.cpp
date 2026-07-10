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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* current = head;
        int count = 0;
        ListNode* first = head;
        ListNode* last = head;
        while(current!= nullptr){
            count++;
            if(count == k)
                first = current;
               
            current = current->next;
            
     
        }
        int lastpos = (count-k)+1;
        current  = head;
        int i = 1;
        while(i<lastpos){
            i++;
            current = current->next;

        }
        last = current;
        int val = first->val;
        first->val = last->val;
        last->val = val;


        return head;




        
    }
};