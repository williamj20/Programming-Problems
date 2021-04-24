// Accepted: 04/24/21
// Runtime: 0ms (faster than 100%)
// Time Complexity: O(n) - the recursive function is T(n) = 2T(n/2) + 1
// Space Complexity: O(n) worst case, O(logn) average case
// Postorder Traversal: Left, Right, Root

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
    void postorderTraversalHelper(TreeNode* root, vector<int> &v) {
        if (root == nullptr) {
            return;
        }
        postorderTraversalHelper(root->left, v);
        postorderTraversalHelper(root->right, v);
        v.push_back(root->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        postorderTraversalHelper(root, v);
        return v;
    }
};
