/* A binary tree node has data, pointer to left child
   and a pointer to right child
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

// return true if the given tree is a BST, else return false
bool checkNode(Node* node,int min,int max)
{
    if(node==NULL) return 1;
    if(node->data<min||node->data>max) return 0;
    else{
        checkNode(node->left,min,node->data-1)&&
        checkNode(node->right,node->data+1,max);
    }
}
bool isBST(Node* root) {
    return checkNode(root,INT_MIN,INT_MAX);
}
