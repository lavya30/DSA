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
    ListNode* deleteDuplicates(ListNode* head) {

        unordered_map<int,int>hash;

        ListNode* current =  head;
        while(nullptr != current){
            hash[current->val]++;

            current = current-> next;
        }

        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;

        current = head;
        while (nullptr != current) {
            if (hash[current->val] == 1) {
                ListNode* newNode = new ListNode(current->val);
                tail->next = newNode;
                tail = tail->next;
            }
            current = current->next;
        }

        tail ->next = nullptr;
    
      
        return dummy->next;

        
    }
};