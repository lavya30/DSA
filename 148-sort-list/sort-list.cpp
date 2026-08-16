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
    ListNode* mergeList(ListNode* l1 ,  ListNode* l2){
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;

        while(nullptr != l1 && nullptr !=l2){
            if(l1->val <= l2->val){
                tail->next = l1;
                l1 = l1->next;
                
            }
            else{
                tail ->next = l2;
                l2 =l2 ->next;
               
            }
            tail = tail->next;
        }
        if(l1 != NULL)
        {
            tail -> next = l1;
            l1 = l1->next;
        }
        
        if(l2 != NULL)
        {
            tail -> next = l2;
            l2 = l2 ->next;
        }
        return dummy->next;

        
    }
public:
    ListNode* sortList(ListNode* head) {
        if(nullptr == head || nullptr == head->next)
            return head;
        ListNode* temp = nullptr;
        ListNode* slow = head;
        ListNode* fast = head;

        while(nullptr != fast && nullptr != fast -> next){
            temp = slow;
            slow = slow -> next;
            fast = fast->next->next;
        }
        temp -> next = nullptr;

        ListNode* l1 =sortList(head);
        ListNode* l2 =sortList(slow);
        
        return mergeList(l1,l2);
    }
};