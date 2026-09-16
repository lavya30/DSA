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
private:
    ListNode* reverse(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* current = head;

        while(current != nullptr){
            ListNode* nex = current->next;
            current->next = prev;
            prev = current;
            current = nex;
        }

        return prev;
    }
public:
    int pairSum(ListNode* head) {
        int count = 0;
        ListNode* fast = head;
        ListNode* slow = head;

        while(nullptr != fast && nullptr != fast->next){
            count++;
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* head2 = reverse(slow);
        int maxim = INT_MIN;

        ListNode* p1 = head;
        ListNode* p2 = head2;

        for(int i = 0; i < count; i++){
            maxim = max(maxim, p1->val + p2->val);
            p1 = p1->next;
            p2 = p2->next;
        }

        return maxim;
    }
};