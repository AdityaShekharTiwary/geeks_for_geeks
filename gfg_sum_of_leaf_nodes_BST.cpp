/* The structure of Node
struct Node{
    int data;
    Node *left,*right;
}; */


/*You are required to complete below method */
int sumOfLeafNodes(Node *root ){
    int sum=0;
     if(!root) return 0;
     if(!root->left && !root->right) sum+=root->data;
     else return sumOfLeafNodes(root->left)+sumOfLeafNodes(root->right);
}
