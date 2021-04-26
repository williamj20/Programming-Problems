// Level-Order Traversal of a Binary Tree using Queues
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> levelOrderTraversalList;
        if (root == nullptr) {
            return levelOrderTraversalList;
        }
        queue<TreeNode*> Q;
        Q.push(root);
        while (!Q.empty()) {
            vector<int> nodesAtLevel;
            for (int i = 0, n = Q.size(); i < n; i++) { // iterate through visited nodes in the queue and add their children nodes to queue0
                TreeNode* current = Q.front(); // get first visited node in queue
                Q.pop();
                nodesAtLevel.push_back(current->val); // add node value to vector
                if (current->left != nullptr) { // add left child
                    Q.push(current->left);
                }
                if (current->right != nullptr) { // add right child
                    Q.push(current->right);
                }
            }
            levelOrderTraversalList.push_back(nodesAtLevel);
        }
        return levelOrderTraversalList;
    }
};
