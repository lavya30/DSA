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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;

        ListNode* ptr1 = list1;
        ListNode* ptr2 = list2;

        while(nullptr != ptr1 && nullptr != ptr2){
           
                if(ptr1 -> val <= ptr2 -> val ){
                    tail->next =  ptr1;
                    tail = tail ->next;
                    ptr1 =  ptr1 -> next;
                }

                else if(ptr2 -> val < ptr1 -> val){
                    tail -> next = ptr2;
                    tail = tail ->next;
                    ptr2 = ptr2 -> next;
                }

        }

        while(ptr1 !=  nullptr){
            tail -> next = ptr1;
            tail = tail -> next;
            ptr1 = ptr1-> next;
        }
        while(ptr2 != nullptr){
            tail -> next = ptr2;
            tail = tail -> next;
            ptr2 = ptr2-> next;
        }
        return dummy -> next;
        
    }
};