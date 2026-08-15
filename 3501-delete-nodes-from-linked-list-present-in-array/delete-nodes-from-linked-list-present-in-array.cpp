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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {


        ListNode* current = head;
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;

        unordered_set<int> num(nums.begin(),nums.end());

        while(nullptr != current){
            if(num.find(current -> val) == num.end()){
                tail -> next = current;
                tail = tail -> next;
            }
            current = current -> next;
        }
        tail -> next = nullptr;
        return dummy ->next;
        
    }
};