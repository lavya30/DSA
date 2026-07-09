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
    ListNode *detectCycle(ListNode *head) {

        ListNode* fast = head;
        ListNode* slow =  head;

        if(head == nullptr || head->next ==  nullptr)
            return nullptr;

        while(fast!=nullptr && fast->next!=nullptr){
          
          
            slow = slow->next;
      
            fast = fast->next->next;

            if(fast == slow){
               slow = head;

               while(fast!=slow){
                fast = fast->next;
                slow = slow->next;
               }
               return slow;
            }
        }


        // vector<ListNode*>vec;

        // ListNode* current = head;

        // while(current!=nullptr){
        //     if(find(vec.begin(),vec.end(),current)!=vec.end()){
        //         return current;
        //     }
        //     vec.push_back(current);
            
        //     current =  current->next;
        // }
        return nullptr;

        
    }
};