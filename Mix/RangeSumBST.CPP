/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    
    int rangeSumBST(TreeNode* root, int l, int r) {
        int ans=0;
        if(root!=NULL){
            if(root->val >= l && root->val<=r)  ans+=root->val;
            ans+=  rangeSumBST(root->left,l,r);
            ans+=   rangeSumBST(root->right,l,r);
        }
        return ans;
    }
};
