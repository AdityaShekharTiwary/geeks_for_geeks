/*The structure of Node

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

// returns the inorder successor of the Node x in BST (rooted at 'root')
Node * inOrderSuccessor(Node *root, Node *x)
{
    if(!root) return NULL;
    Node* temp=NULL;
    if(root->data<=x->data) temp=inOrderSuccessor(root->right,x);
    else if(root->data>x->data) {
        temp=inOrderSuccessor(root->left,x);
        if(temp==NULL)
            temp=root;
    }
    return temp;
}
