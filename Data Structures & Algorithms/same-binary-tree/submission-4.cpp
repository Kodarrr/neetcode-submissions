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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // cout<<p->val<<' '<<q->val<<endl;
        if(p==NULL&&q==NULL)return true;
        else if(p==NULL||q==NULL)return false;
        
        if(p->val!=q->val){
            
            return false;
        }
        bool ans=1;
        // if(p->left!=NULL && q->left!=NULL)
        ans=ans & isSameTree(p->left,q->left);
        // else if(p->left==NULL&&q->left==NULL){

        // }
        // else return false;
        
        // if(p->right!=NULL&&q->right!=NULL)
        ans=ans & isSameTree(p->right, q->right);
        // else if(p->right==NULL && q->right==NULL){

        // }
        // else return false;

        return ans;
    }
};
