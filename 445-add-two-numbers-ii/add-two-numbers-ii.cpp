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
            ListNode* next =  current -> next;
            current -> next =  prev;
            prev = current;
            current = next;
        }
        return prev;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* rl1 = reverse(l1);
        ListNode* rl2 = reverse(l2);

        int carry = 0;

        ListNode* current = rl1;
        ListNode* current2 = rl2;
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;
        while(nullptr != current && nullptr != current2){
            int sum = current->val + current2->val + carry;
            int ldigit = sum%10;
            int ans = ldigit;
            ListNode* newNode = new ListNode(ans);
            tail -> next = newNode;
            tail = tail -> next;

            current =  current->next;
            current2 = current2-> next;

            if(sum >9)
                carry =1;
            else
                carry = 0;
            
        }


        while(nullptr != current){
            int sum = current->val +  carry;
            int ldigit = sum%10;
            ListNode* newNode = new ListNode(ldigit);
            tail-> next = newNode;
            tail = tail-> next;

            current = current-> next;
            if(sum >9)
                carry =1;
            else
                carry = 0;
        }

        
        while(nullptr != current2){
            int sum = current2->val +  carry;
            int ldigit = sum%10;
            ListNode* newNode = new ListNode(ldigit);
            tail-> next = newNode;
            tail = tail-> next;

            current2 = current2-> next;

            if(sum >9)
                carry =1;
            else
                carry = 0;
        
        }
        if(carry){
            int ans = carry;
            ListNode* newNode = new ListNode(ans);
            tail-> next = newNode;
            tail = tail-> next;
        }
        
        tail ->next = nullptr;
        dummy = dummy->next;
        dummy = reverse(dummy);
        return dummy;
    }
};