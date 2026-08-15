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

        int counter = 0;
        ListNode* current = list1;
        ListNode* prev = list1;
        ListNode* current2 = list2;

        while(nullptr != current2 -> next){
            current2 = current2->next;
        }
        while(nullptr != current && nullptr != current->next){
            prev = current;
            current =  current->next;

            counter++;
            if(counter == a){
                prev -> next = list2;
            }
            if(counter == b){
                current2 -> next = current->next;
            }
        }
        return list1;
        
    }
};