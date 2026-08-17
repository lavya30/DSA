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
        ListNode* current = head;
        ListNode* prev = nullptr;
        while(nullptr != current){
            ListNode* next = current ->next;
            current ->next = prev;
            prev = current;
            current = next;
        }
        return prev;
        
    }
public:
    bool isPalindrome(ListNode* head) {

        if(nullptr == head || nullptr == head->next)
            return head;

        ListNode* slow = head;
        ListNode* fast =  head;

        while(nullptr != fast && nullptr != fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* rev = reverse(slow);   

        while(nullptr != rev){
            if(head ->val != rev->val)
                return false;
            head= head->next;
            rev = rev->next;
        }    
        return true;
      
    }
};