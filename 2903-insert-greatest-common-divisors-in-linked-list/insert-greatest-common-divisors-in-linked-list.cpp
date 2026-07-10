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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* current = head->next;
        ListNode* prev = head;

        while(prev->next!=nullptr){
            int val1=prev->val;
            int val2=current->val;
            int maxim =  max(val1,val2);
            int gcd = 0;
            for(int i = maxim;i>0;i--){
                if(val1%i==0 && val2%i==0){
                    gcd = max(gcd,i);
                }

            }
            ListNode* gcdNode = new ListNode(gcd);
            prev->next =  gcdNode;
            gcdNode->next =  current;


            current = current->next;
            prev = prev->next->next;

            

        }
        return head;
    }
};