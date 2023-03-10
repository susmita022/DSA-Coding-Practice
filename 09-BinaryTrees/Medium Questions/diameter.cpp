

//   EASY CODE BUT TC IS O(n)

class Solution {
    private:
     int height(struct Node* node){
        // code here 
        //base case
        if(node==NULL) return 0;
        
        int left= height(node->left);
        int right= height(node->right);
        
        int height= max(left,right)+1;
        
        return height;
    }
  public:
     
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        if(root==NULL) return 0;
        
        int op1= diameter(root->left);
         int op2= diameter(root->right);
         
         int op3= height(root->left)+1+height(root->right);
         
         return max(op1,max(op2,op3));
    }
};
         //OPTIMIZED CODE TC IS O(n^2)

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        height(root, diameter);
        return diameter;
    }

private:
    int height(TreeNode* node, int& diameter) {

        if (!node) {
            return 0;
        }

        int lh = height(node->left, diameter);
        int rh = height(node->right, diameter);

        diameter = max(diameter, lh + rh);

        return 1 + max(lh, rh);
    }
};
