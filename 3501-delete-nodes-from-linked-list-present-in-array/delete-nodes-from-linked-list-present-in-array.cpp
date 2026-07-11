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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> badNums(nums.begin(), nums.end());
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;
        // vector<int>vec;
        ListNode* current = head;
        while(current!=nullptr){
            if(badNums.find(current->val)==badNums.end()){
                tail->next = current;
                tail = tail->next;
            }
            
            current = current -> next;
        }

        // for(int i =0;i<nums.size();i++){
        //     vec.erase(remove(vec.begin(), vec.end(), nums[i]), vec.end());
        // }

        // current =  head;
        // while(current!=nullptr){
        //     if(find(vec.begin(),vec.end(),current->val)!=vec.end()){
        //         tail->next = current;
        //         tail = tail->next;
                
        //     }
        //     current =  current->next;
            
            
        // }
        tail->next = nullptr;

        return dummy->next;




        
    }
};