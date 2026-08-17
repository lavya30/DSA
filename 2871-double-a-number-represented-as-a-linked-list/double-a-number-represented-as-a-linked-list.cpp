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
    ListNode* doubleIt(ListNode* head) {

        ListNode* current = head;
        ListNode* prev = nullptr;
        while(nullptr!= current){
            ListNode* next = current -> next;
            current -> next= prev;
            prev = current;
            current = next;
            
        }
        head = prev;

        int carry = 0;
        
        current = head;
        prev = head;
        while(nullptr!= current){
            prev = current;
            int val = current -> val *2;
            
            int last = val % 10;
            current -> val =  last + carry;
            if(val >9)
                carry = 1;
            else    
                carry = 0;
            current = current -> next;
        }

        if(carry){
            ListNode* newNode = new ListNode(carry);
            prev -> next = newNode;
            newNode -> next = nullptr;
        }

        current = head;
        prev = nullptr;
        while(nullptr!= current){
            ListNode* next = current -> next;
            current -> next= prev;
            prev = current;
            current = next;
            
        }
        head = prev;
        return head;


        

        
    }
};