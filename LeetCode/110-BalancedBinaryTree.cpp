// Recursively check subtrees and their heights, and make sure they are balanced. If we find a subtree that is not balanced, we indicate
// that the entire subtree is not balanced
// Time Complexity: O(n)
// Space Complexity: O(h)

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
    // helper function that finds heights of subtrees recursively, returns -1 if the tree is not balanced
    int getHeight(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int leftHeight = getHeight(root->left);
        if (leftHeight == -1) { // if we get -1, then somewhere it is not balanced so we return it up the recursion
            return -1;
        }
        int rightHeight = getHeight(root->right);
        if (rightHeight == -1) { // if we get -1, then somewhere it is not balanced so we return it up the recursion
            return -1;
        }
        if (abs(leftHeight - rightHeight) > 1) { // make sure the left and right subtree heights are balanced, otherwise return -1 (indicator that it is not balanced)
            return -1;
        }
        return max(leftHeight, rightHeight) + 1; // return height of subtree
    }
    
    bool isBalanced(TreeNode* root) {
        return getHeight(root) != -1; // if we get -1 from getHeight, then tree is not balanced
    }
};
