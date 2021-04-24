// Accepted: 04/24/21
// Runtime: 0ms (faster than 100%)
// Time Complexity: O(n) - the recursive function is T(n) = 2T(n/2) + 1
// Space Complexity: O(n) worst case, O(logn) average case
// Inorder Traversal: Left, Root, Right

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
    void inorderTraversalHelper(TreeNode* root, vector<int> &v) {
        if (root == nullptr) {
            return;
        }
        inorderTraversalHelper(root->left, v);
        v.push_back(root->val);
        inorderTraversalHelper(root->right, v);\
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        inorderTraversalHelper(root, v);
        return v;
    }
};
