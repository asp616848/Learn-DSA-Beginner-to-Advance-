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
    int recursive(TreeNode* root, int max){
        //maybe int max won't work we might need an array since after returning from right traversal.
        if(root == nullptr){
            return 0;
        }
        int c = 0;

        if(max <= root->val){
            max = root->val;
            c++;
        }

        c += recursive(root->left, max);

        c += recursive(root->right, max);
        
        return c;
    }
    int goodNodes(TreeNode* root) {
        int max = root->val;
        return recursive(root, max);
    }
};