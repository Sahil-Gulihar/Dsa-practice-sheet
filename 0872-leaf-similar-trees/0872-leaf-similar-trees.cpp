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
private:
    void preorder(TreeNode* root,vector<int> &a){
        if(root==NULL){
            return ;
        }
        if(root->left == NULL && root->right==NULL)
            a.push_back(root->val);
        preorder(root->left,a);
        preorder(root->right,a);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> a;
        vector<int> b;
        preorder(root1,a);
        preorder(root2,b);
        if(a==b)
            return true;
        else
            return false;
    }
};