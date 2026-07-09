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

        vector<ListNode*>vec;
        ListNode* first =  headA;
        ListNode* second = headB;

        while(first!=nullptr){
            vec.push_back(first);
            first =  first->next;

        }
        while(second!=nullptr){
            if(find(vec.begin(),vec.end(),second)!=vec.end()){
                return second;
                
            }
            second = second->next;
        }
        return nullptr;
        
    }
};