//https://leetcode.com/problems/flatten-binary-tree-to-linked-list/

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

//morris traversal
class Solution {
public:
    void flatten(TreeNode* node) {
        if(node==NULL)
            return;
        TreeNode* root=node;
        while(root !=NULL){
            
            if(root->left){
                //Finding current node's prenode that will link to current node's right subtree

                TreeNode* pre =root->left;
                while(pre->right)
                    pre=pre->right;
                pre->right = root->right;
                root->right = root->left;
                //current root's right node is pointing to its left subtree 
                //right subtree is linked by current node's prenode

                root->left=NULL;    //it should be updated to NULL
            }
            root=root->right;
        }
    }
};
