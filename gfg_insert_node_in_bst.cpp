/* The structure of a BST node is as follows:

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

*/

// The function returns the root of the BST (currently rooted at 'root')
// after inserting a new Node with value 'Key' into it.
Node* insert(Node* root, int key)
{
    if(!root){
        root=new Node(key);
        return root;
    }
    else{
        if(root->data>key) root->left=insert(root->left,key);
        else if(root->data<key) root->right=insert(root->right,key);
        return root;
    }
}
