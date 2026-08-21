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
    void path(TreeNode*root,vector<string>&res,string route){
        if(root==NULL) return;
        route+=to_string(root->val);
        if(!root->left && !root->right) res.push_back(route);
        if(root->left) path(root->left,res,route+"->");
        if(root->right) path(root->right,res,route+"->");
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        if(!root) return res;
        path(root,res,"");
        return res;
    }
};