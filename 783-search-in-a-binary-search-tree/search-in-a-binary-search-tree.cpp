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
private:
    void preorder(TreeNode* root ,  TreeNode* &ans , int &val){
        if(nullptr == root)
            return;
        preorder(root->left,ans,val);
        if(root->val == val)
            ans = root;

        preorder(root->right,ans ,val);
    }
public:
    TreeNode* searchBST(TreeNode* root, int val) {

        TreeNode* ans = nullptr;
        preorder(root, ans ,val);
        return ans;

        
        
    }
};