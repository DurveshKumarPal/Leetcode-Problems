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
    int minDepth(TreeNode* root){
        
        if(root==NULL)
            return 0;
            
         if(root->right==NULL && root->left==NULL)
             return 1;
       
        if(root->right!=NULL && root->left!=NULL){
        int lh=minDepth(root->left);
        int rh=minDepth(root->right);
        
        return min(lh,rh)+1;
        }
        else if(root->right==NULL){
            return minDepth(root->left)+1;
        }
        else{
            return minDepth(root->right)+1;
        }
        
       
    }
};