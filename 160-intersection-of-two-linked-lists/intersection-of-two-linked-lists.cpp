/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* first= headA;
        ListNode* second = headB;

        int a = 0;
        int b = 0;

        while(first!=nullptr && first ->next != nullptr){
            a++;
            first = first ->next;
        }
        while(second !=nullptr  && second->next!=nullptr){
            b++;
            second = second->next;
        }
        first= headA;
        second = headB;
        while(b>a){
            second = second ->next;
            b--;

        }
        while(a>b){
            first = first->next;
            a--;
        }

        while(first!=second){
            first = first->next;
            second = second ->next;
        }
        return first;
        

    }
};