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
    vector<vector<int>> levelOrder(TreeNode* root) {
       queue<TreeNode *> q1;
        vector<vector<int>> res;
        
        if(!root) return res;
        
        q1.push(root);
        
        while(!q1.empty()){
            int size = q1.size();
            vector<int> lvl;
            
            while(size--){
                TreeNode *curr = q1.front();
                q1.pop();
                
                if(curr->left) q1.push(curr->left);
                if(curr->right) q1.push(curr->right);
                
                lvl.push_back(curr->val);
            }
            
            res.push_back(lvl);
        }
        
        return res;
    }
    
    
};
