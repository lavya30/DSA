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
    bool check(TreeNode* root1 , TreeNode* root2){
          if(nullptr == root1 && nullptr == root2)
            return true;
        if(nullptr == root1 || nullptr == root2)
            return false;
        if(root1->val != root2->val)
            return false;
        
        bool l = check(root1->left, root2->right);
        bool r = check(root1->right, root2->left);

        if(l && r)
            return true;
        return false;
    }
public:
    bool isSymmetric(TreeNode* root) {

        TreeNode* root1 = root->left;
        TreeNode* root2 = root->right;
        bool ans = check(root1 , root2);

        return ans;

      
        
    }
};