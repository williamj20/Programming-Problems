// Uses Level-Order Traversal (Breadth-First Search)
// Time Complexity: O(n)

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
    int minDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int depth = 0;
        queue<TreeNode*> Q; // initialize Queue
        Q.push(root);
        while (!Q.empty()) { // iterate Queue
            depth++;
            for (int i = 0, n = Q.size(); i < n; i++) { // iterate through visited nodes in the queue and add their children nodes to queue0
                TreeNode* current = Q.front(); // get first visited node in queue
                Q.pop();
                if (current->left == nullptr && current->right == nullptr) { // if current node is a leaf, return
                    return depth;       
                }
                if (current->left != nullptr) { // add left child
                    Q.push(current->left);
                }
                if (current->right != nullptr) { // add right child
                    Q.push(current->right);
                }
            }
        }
        return depth;
    }
};
