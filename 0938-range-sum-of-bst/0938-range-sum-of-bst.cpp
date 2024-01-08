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
    void solve(TreeNode* root,int low,int high,vector<int> &dp){
        if(root==nullptr) return ;
        if(root->val >=low && root->val<= high) dp.push_back(root->val);
        solve(root->left,low,high,dp);
        solve(root->right,low,high,dp);

    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> dp;
        solve(root,low,high,dp);
        int sum=0;
        for(auto &i:dp) sum+=i;
        return sum;
    }
};