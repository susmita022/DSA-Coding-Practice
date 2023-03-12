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
    bool isSameTree(TreeNode* r1, TreeNode* r2) {
        if(r1==NULL && r2==NULL) return true;
        
        else if(r1==NULL || r2==NULL) return false;
        
        bool left = isSameTree(r1->left,r2->left);
        bool right = isSameTree(r1->right,r2->right);
        bool check= r1->val==r2->val;
        
        if(left==true && right==true && check==true) return true;
        else return false;
    }
    
};
