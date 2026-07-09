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

        // vector<ListNode*>vec;
        // ListNode* first =  headA;
        // ListNode* second = headB;

        // while(first!=nullptr){
        //     vec.push_back(first);
        //     first =  first->next;

        // }
        // while(second!=nullptr){
        //     if(find(vec.begin(),vec.end(),second)!=vec.end()){
        //         return second;
                
        //     }
        //     second = second->next;
        // }
        // return nullptr;
        ListNode* first =  headA;
        ListNode* second = headB;
        int counta = 0;
        int countb = 0;

        while(first!=nullptr){
            counta++;
            first = first->next;
        }

        while(second!=nullptr){
            countb++;
            second = second->next;
        }
        first = headA;
        second = headB;

        while(counta>countb){
            first = first->next;
            counta--;

        }
        while(countb>counta){
            second = second->next;
            countb--;

        }


        while(first!=second){
            first = first->next;
            second = second->next;
        }
        return first;
       
        
    }
};