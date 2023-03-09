/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/

//HERE POSITIVELY PASS VALUE BY REFERENCE.AS IT IS OF VOID TYPE,ITS IMP TO PASS BY REFERENCE SO AS TO CHANGE VALUE OF COUNT.

inorder(BinaryTreeNode<int> *root, int &count){
    if(root==NULL) return;

    inorder(root->left,count);

    if(root->left==NULL&&root->right==NULL){ count++;}

    inorder(root->right,count);
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    inorder(root,cnt);
    return cnt;

}
