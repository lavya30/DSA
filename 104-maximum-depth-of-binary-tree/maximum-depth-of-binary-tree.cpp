/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {

        if(nullptr == root)
            return 0;

        queue<TreeNode*>q;
        q.push(root);
        int depth = 0;

        while(!q.empty()){
            int s = q.size();
            

            while(s--){
               
            TreeNode* element = q.front();
            q.pop();
            if (element->left) q.push(element->left);
            if (element->right) q.push(element->right);
                
            }
            depth++;

            

        }
        return depth;
    }
};