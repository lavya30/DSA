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
    ListNode *detectCycle(ListNode *head) {
        vector<ListNode*>vec;

        ListNode* current = head;

        while(current!=nullptr){
            if(find(vec.begin(),vec.end(),current)!=vec.end()){
                return current;
            }
            vec.push_back(current);
            
            current =  current->next;
        }
        return nullptr;

        
    }
};