// Uses preorder traversal
// Time Complexity: O(m) where m is the minimum number of nodes between the two trees
// Space Complexity: O(m)

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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (root1 == nullptr) {
            return root2;
        }
        if (root2 == nullptr) {
            return root1;
        }
        // preorder traversal
        root1->val += root2->val; // we "merge" tree using root1
        root1->left = mergeTrees(root1->left, root2->left); // set root1 left child to be result of mergeTrees on left children of the trees
        root1->right = mergeTrees(root1->right, root2->right); // set root1 right child to be result of mergeTrees on right children of the trees
        return root1;
    }
};
