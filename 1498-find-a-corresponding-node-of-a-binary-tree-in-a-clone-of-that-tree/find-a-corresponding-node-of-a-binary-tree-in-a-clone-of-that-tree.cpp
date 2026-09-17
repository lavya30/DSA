/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
private:
    void inorder(TreeNode* root ,  TreeNode* target, TreeNode* &ans){
        if(nullptr  == root)    
            return;
        inorder(root->left ,target, ans);
        if(root->val == target->val)
            ans = root;
        inorder(root ->right ,  target,ans);
    }
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {

        TreeNode* ans;
        inorder(cloned , target , ans);
        return ans;

   
        
    }
};