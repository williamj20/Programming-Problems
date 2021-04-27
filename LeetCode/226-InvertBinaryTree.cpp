// Time Complexity: O(n) - we visit each node once
// Space Complexity: O(n) - O(h) function calls placed on stack in worst case, where h is height of tree. h is in O(n), so we get O(n)

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
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) { // if root is nullptr, we do nothing
            return root;
        }
        swap(root->left, root->right); // swap left and right trees
        root->left = invertTree(root->left);
        root->right = invertTree(root->right);
        return root;
    }
};
