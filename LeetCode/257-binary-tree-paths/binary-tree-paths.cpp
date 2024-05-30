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
        vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        if (root != nullptr) {
            string currentPath = to_string(root->val);
            recAll(root, paths, currentPath);
        }
        return paths;
    }

    void recAll(TreeNode* node, vector<string> &paths, string currentPath) {
        // Check if the node is a leaf
        if (node->left == nullptr && node->right == nullptr) {
            paths.push_back(currentPath);
            return;
        }
        // Traverse the left child
        if (node->left != nullptr) {
            recAll(node->left, paths, currentPath + "->" + to_string(node->left->val));
        }
        // Traverse the right child
        if (node->right != nullptr) {
            recAll(node->right, paths, currentPath + "->" + to_string(node->right->val));
        }
    }
};