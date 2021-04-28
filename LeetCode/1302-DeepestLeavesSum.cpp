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
    int deepestLeavesSum(TreeNode* root) {
        int sum = 0;
        queue<TreeNode*> Q;
        Q.push(root);
        while (!Q.empty()) {
            sum = 0;
            for (int i = 0, n = Q.size(); i < n; i++) { // we get the sum of all the nodes at each level, but we only return the sum at the deepest level
                TreeNode* current = Q.front();
                Q.pop();
                sum += current->val;
                if (current->left != nullptr) {
                    Q.push(current->left);
                }
                if (current->right != nullptr) {
                    Q.push(current->right);
                }
            }
        }
        return sum;
    }
};
