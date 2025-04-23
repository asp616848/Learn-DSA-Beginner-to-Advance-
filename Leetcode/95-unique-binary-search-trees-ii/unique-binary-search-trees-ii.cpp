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
    vector<TreeNode*> generate(int s, int e){
        vector<TreeNode*> tree;
        if (s > e) {
            tree.push_back(nullptr);
            return tree;
        }
        for( int i =s; i <=e; i++){
            vector<TreeNode*> l = generate(s,i-1);
            vector<TreeNode*> r = generate(i+1,e);
            for(TreeNode* nodel: l){
                for(TreeNode* noder: r){
                    TreeNode* root = new TreeNode(i);
                    root->left = nodel;
                    root->right = noder;

                    tree.push_back(root);
                }
            }
        }
        return tree;
    }
    vector<TreeNode*> generateTrees(int n) {
        if (n == 0) return {};
        return generate(1,n);
    }
};