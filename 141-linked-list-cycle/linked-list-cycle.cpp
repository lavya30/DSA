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
    bool hasCycle(ListNode *head) {
        ListNode* current = head;
     
        unordered_set<ListNode*>value;
        while(current!=nullptr){
            if(value.contains(current)){
                return true;
                
            }
            value.insert(current);
            current = current->next;
            
        }
        return false;

        
    }
};