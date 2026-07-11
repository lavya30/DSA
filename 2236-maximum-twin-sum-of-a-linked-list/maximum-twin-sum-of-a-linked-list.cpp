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
    int pairSum(ListNode* head) {
        int maxim = 0;
        vector<int>vec;
        ListNode* current = head;

        while(current!=nullptr){
            vec.push_back(current->val);
            current = current->next;
        }
        for(int i=0;i<vec.size();i++){
            int n = (vec.size()-1-i);
            int res = vec[i]+vec[n];
            maxim = max(maxim , res);
        }
        return maxim;
        
    }
};