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
    int maxsum;
    int fun(TreeNode* root){
        if(root==NULL) return 0;
        int l=fun(root->left);
        int r=fun(root->right);
        int maxsumdown=l+r+root->val;
        int maxsum_l_ya_r=max(l,r)+root->val;
        int maxsumroot=root->val;

        maxsum=max({maxsum,maxsumdown,maxsum_l_ya_r,maxsumroot});
        return max(maxsum_l_ya_r,maxsumroot);
    }
    int maxPathSum(TreeNode* root) {
        maxsum=INT_MIN;
        fun(root);
        return maxsum;

    }
};