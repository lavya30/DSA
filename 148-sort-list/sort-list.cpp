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
    ListNode* sortList(ListNode* head) {
        ListNode* current = head;
        vector<ListNode*>vec;
        while(current!=nullptr){
            vec.push_back(current);
            current =  current->next;
        }
        sort(vec.begin(), vec.end(), [](ListNode* a, ListNode* b) {
            return a->val < b->val;
        });
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;
        for(int i = 0; i<vec.size();i++){
            tail->next = vec[i];
            tail = tail->next;

        }
        tail->next = nullptr;
        ListNode* newHead = dummy->next;
        delete dummy; 
        
        return newHead;
       
        
        
    }
};