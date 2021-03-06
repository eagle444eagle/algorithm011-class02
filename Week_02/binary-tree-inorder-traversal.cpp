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
public:
    vector<int> v;
    void inOrder(TreeNode* root) {
        if (root == NULL) return;
        inOrder(root->left);
        v.push_back(root->val);
        inOrder(root->right);
    };
    vector<int> inorderTraversal(TreeNode* root) {    
        // v.clear();
        inOrder(root);
        return v;
    }
};