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
        int result = 0;

        while(current!=nullptr){
            // s+= to_string(current->val);
            result = result*2+current->val;

            current = current -> next;


        }

        // result = stoi(s,nullptr,2);
        return result;
        
    }
};