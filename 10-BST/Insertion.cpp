

      // RECURSIVE //

  Node* insert(Node* root, int Key) {
    // Your code here
    if(root == NULL)
        return new Node(Key);
    if(Key < root->data)
        root->left = insert(root->left, Key);
    else if(Key > root->data)
        root->right = insert(root->right, Key);
    return root;
}


     // ITERATIVE //

void insert(Node*& root, int key)
{
    Node* node = new Node(key);
    if (!root) {
        root = node;
        return;
    }
    Node* prev = NULL;
    Node* temp = root;
    while (temp) {
        if (temp->val > key) {
            prev = temp;
            temp = temp->left;
        }
        else if (temp->val < key) {
            prev = temp;
            temp = temp->right;
        }
    }
    if (prev->val > key)
        prev->left = node;
    else
        prev->right = node;
}
