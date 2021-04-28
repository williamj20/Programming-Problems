// Uses queues (level-order traversal)

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
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }
        queue<TreeNode*> Q;
        // we initially push the root twice, so we can check for symmetry easier later on
        Q.push(root);
        Q.push(root);
        while (!Q.empty()) {
            TreeNode* left = Q.front();
            Q.pop();
            TreeNode* right = Q.front();
            Q.pop();
            if (left == nullptr && right == nullptr) { // if both nodes to compare are null, then it's still symmetrical
                continue;
            }
            else if (left == nullptr || right == nullptr) { // if only one of the nodes are null, then it's not symmetrical
                return false;
            }
            else if (left->val != right->val) { // if the nodes' values don't match, it's not symmetrical
                return false;
            }
            // we push child nodes in a specific order so that checking if the level is symmetric is easier
            Q.push(left->left); 
            Q.push(right->right);
            Q.push(left->right);
            Q.push(right->left);
        }
        return true;
    }
};
