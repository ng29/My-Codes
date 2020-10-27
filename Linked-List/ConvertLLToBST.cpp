/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* toBST(vector<int> vec,int l,int h ,TreeNode* tree){
        if(l>h)return tree;
        if(l==h)return NULL;
        int mid=(l+h)/2;
        tree = new TreeNode(vec[mid]);
        tree->left  = toBST(vec,l,mid,tree);
        tree->right = toBST(vec,mid+1,h,tree);
        return tree;
    }
    
class Solution {
public:

    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> vec;
        int n=0;
        while(head!=NULL){
            vec.push_back(head->val);
            n++;head=head->next;
        }
        return toBST(vec,0,n,NULL);
    }
};