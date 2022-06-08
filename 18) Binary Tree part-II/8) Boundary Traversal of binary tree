//https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/0/#

class Solution {
public:
    vector<int> ans;
    void leftSide(Node* root){
        
        if(root==NULL)
            return;
        
        if(root->left){ //we are not considering extreme left node here
        
            ans.push_back(root->data);  // push values from top to bottom!
            leftSide(root->left);   
            //go to extreme left 
            
        }
        else if(root->right){
            ans.push_back(root->data);
            leftSide(root->right);
        }
            
        
    }
    void leavesInorder(Node* root){
        
        if(root==NULL)
            return;
            
        leavesInorder(root->left);
        
        //extreme left and extreme right node are being taken here
        if(root->left==NULL && root->right==NULL)   
            ans.push_back(root->data);
        
        leavesInorder(root->right);
        
    }
    
    void rightSide(Node* root){
        if(root==NULL)
            return;
        
        if(root->right){
            //we are not considering extreme right node here
             rightSide(root->right);    //go to extreme right and then push values from bottom to top!
             ans.push_back(root->data);
        }
        else if(root->left){
            rightSide(root->left);
            ans.push_back(root->data);
        }
    }
    vector <int> boundary(Node *root)
    {
        if(root==NULL)
            return ans;
        
        ans.push_back(root->data);
        
        leftSide(root->left);   //left side 
        
        if(root->left || root->right)   //check that if root children's are there or not  
            leavesInorder(root);
        
        rightSide(root->right); //right side
        
        return ans;
        //Your code here
    }
};


Time Complexity: O(N).

Reason: The time complexity will be O(H) + O(H) + O(N) which is ≈ O(N)

Space Complexity: O(N)

Reason: Space is needed for the recursion stack while adding leaves. In the worst case (skewed tree), space complexity can be O(N).

