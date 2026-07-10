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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int count = -1;
        ListNode* current = list1;
        ListNode* cur = list2;
        ListNode* last = list1;
        while(current->next!=nullptr){
            count++;
            if(count == b){
                last = current->next;
                current->next = nullptr;
                break;
            }
            current = current->next;
        }
        count = -1;
       
        current= list1;

        
        count =-1;

        current = list1;
        while(current->next!=nullptr){
            count++;
           
            if(count == a-1){
                current->next = cur;
                break;
            }
            else
                current = current->next;
        }
        while(cur->next!=nullptr){
            cur = cur ->next;
        }
        cur -> next = last;

        return list1;
        
    }
};