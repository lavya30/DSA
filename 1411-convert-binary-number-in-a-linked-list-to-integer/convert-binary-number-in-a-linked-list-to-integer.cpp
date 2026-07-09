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
    int getDecimalValue(ListNode* head) {


        ListNode* current = head;
        string s = "";

        while(current!=nullptr){
            s+= to_string(current->val);
            current = current -> next;


        }

        int result = stoi(s,nullptr,2);
        return result;
        
    }
};