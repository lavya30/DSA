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

        vector<int>store;

        ListNode* current = head;

        while(nullptr != current ){
            store.push_back(current -> val);

            current = current -> next;
        }
        int maxim = INT_MIN;
        int low = 0;
        int high = store.size()-1;

        while(low<high){
            maxim = max(maxim , store[low]+store[high]);

            low++;
            high--;
        }
        return maxim;
        
    }
};