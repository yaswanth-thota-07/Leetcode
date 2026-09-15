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
    void recur(TreeNode* root, int count, int &maxt){
        if(root==nullptr){
            return;
        }
        maxt = max(maxt,count);
        recur(root->left,count+1,maxt);
        recur(root->right,count+1,maxt);
    }
    int maxDepth(TreeNode* root) {
        int count = 1;
        int maxt = 0;
        recur(root,count,maxt);
        return maxt;

    }
};