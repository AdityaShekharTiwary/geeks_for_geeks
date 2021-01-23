* The structure of a BST Node is as follows:

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

// Return the root of the modified BST after deleting the node with value X
Node *deleteNode(Node *root,  int X)
{
    // your code goes here
    if(!root)
    return NULL;
    if(root->data==X)
    {
        Node *temp1=root,*temp2=root;
        while(temp1->right!=NULL)
        temp1=temp1->right;
        if(temp1==root)
        return NULL;
        while(temp2->right!=temp1 && temp2->right!=NULL)
        temp2=temp2->right;
        root->data=temp1->data;
        temp2->right=NULL;
    }
    if(X>root->data)
    root->right=deleteNode(root->right,X);
    if(X<root->data)
    root->left=deleteNode(root->left,X);
    return root;
}
