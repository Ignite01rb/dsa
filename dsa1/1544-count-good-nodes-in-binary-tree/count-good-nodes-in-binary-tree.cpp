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
    void number(TreeNode* root,int& c,int currmax){
        if(root==NULL) return ;
        if(root->val>=currmax){
            c++;
            currmax=root->val;
        }
        number(root->left,c,currmax);
        number(root->right,c,currmax);
        
    }
    int goodNodes(TreeNode* root) {
        int c=0;
        if(root==NULL) return c;
        number(root,c,root->val);
        return c;
    }
};