/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root == NULL) return "()";
        string val = to_string(root->val);
        return "(" + val + serialize(root->left) + serialize(root->right) + ")";
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size() == 2)return NULL;
        int val = 0;
        int i = 1;
        if(data[1] == '-') i++;
        while(isdigit(data[i])){
            val = val * 10 + (data[i] -'0'); 
            i++;
        }
        if(data[1] == '-')  val *= -1;

        int balance = 0;
        int j ;
        for(j = i; j < data.size(); j++){
            if(data[j] == '(') balance++;
            if(data[j] == ')') balance--;
            if(balance == 0) break;
        }
        TreeNode * root = new TreeNode(val);
        root->left = deserialize(data.substr(i, j - i + 1));
        
        root->right = deserialize(data.substr(j + 1, (int)data.size() - j - 2));
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));