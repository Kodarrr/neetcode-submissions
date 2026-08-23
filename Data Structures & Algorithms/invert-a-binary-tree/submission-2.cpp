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
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL){
            return NULL;
        }

        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* node= q.front();
            q.pop();

            if(node->left&& node->right){
                swap(node->left,node->right);
                q.push(node->left);
                q.push(node->right);
            }
            else if(node->left){
                node->right= node->left;
                node->left=NULL;
                q.push(node->right);
            }
            else if(node->right){
                node->left= node->right;
                node->right=NULL;
                q.push(node->left);
            }
        }

        return root;
    }
};
