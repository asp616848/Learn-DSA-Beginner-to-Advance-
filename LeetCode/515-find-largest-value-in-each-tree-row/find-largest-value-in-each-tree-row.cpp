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

    void getLargest(TreeNode* root, int depth, vector<int>& list){
        int mx;
        if(root == NULL){
            return;
        }
        if(depth == list.size()){
            list.push_back(root->val);
        }
        else{
            list[depth] = max(root->val , list[depth]);
        }
        getLargest(root->left, depth+1, list);
        getLargest(root->right, depth+1, list);
        return;
    }
    vector<int> largestValues(TreeNode* root) {
        vector<int> list;
        getLargest(root, 0, list);
        return list;
    }
};