//https://leetcode.com/problems/binary-tree-inorder-traversal/


//INORDER

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
    vector<int> inorderTraversal(TreeNode* node) {
        vector<int> inorder;
        if(node==NULL)
            return inorder;
        
        TreeNode* root = node;
        
        while(root !=NULL){
            
            if(root->left == NULL){
                //as left part is NULL i.e.,  Left Node Right =>current node is our answer
                inorder.push_back(root->val);
                root=root->right;   //it will go back to parent Node by LINKED line
            }
            else{
                TreeNode* pre = root->left;
                //going to rightmost node
                while(pre->right && pre->right!= root){
                    pre = pre->right;
                }
                
                //linking the rightmost node to root node
                if(pre->right ==NULL){
                    pre->right = root;
                    root=root->left;
                }
                // unlinking back the rightmost node to root node
                else{
                    inorder.push_back(root->val);   //it's node(left part is done)
                    pre->right =NULL;
                    root=root->right;  // left root is over of (Left Node Right ), now going to right side
                }
                    
            }
        }
        return inorder;
    }
};




//PREORDER

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
    vector<int> preorderTraversal(TreeNode* node) {
        vector<int> preorder;
        
        if(node==NULL)
            return preorder;
        
        TreeNode* root = node;
        
        while(root !=NULL){
            
            if(root->left == NULL){
                //left most node
                preorder.push_back(root->val);
                root=root->right;   //it will go back to parent Node by LINKED line
            }
            else{
                TreeNode* pre = root->left;
                //going to rightmost node
                while(pre->right && pre->right!= root){
                    pre = pre->right;
                }
                
                //linking the rightmost node to root node
                if(pre->right ==NULL){
                    pre->right = root;
                    preorder.push_back(root->val);  //node is our answer, then we are moving to left
                    root=root->left;
                }
                // unlinking back the rightmost node to root node
                else{
                    pre->right =NULL;
                    root=root->right;  //root left is over of (Node Left  Right ), now going to right side
                }
                    
            }
        }
        return preorder;
    }
};



Time Complexity: O(N).

Space Complexity: O(1)
