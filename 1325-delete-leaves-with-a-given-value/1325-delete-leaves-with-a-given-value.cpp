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
    TreeNode* chk(TreeNode* root,int target){
        if(root==nullptr)return nullptr;
        
        root->left=chk(root->left,target);
        root->right=chk(root->right,target);
        
        if(root->left==nullptr && root->right==nullptr&&root->val==target){
            return nullptr;
        }
        
        return root;
        
    }
    
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        return chk(root,target);
    }
};