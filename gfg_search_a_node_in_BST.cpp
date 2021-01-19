struct Node {
    int data;
    Node* right;
    Node* left;

    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/

/*You are required to complete this method*/
bool search(Node* root, int x)
{
    if(!root) return 0;
    if(root->data==x) return 1;
    if(root->data>x) return search(root->left,x);
    if(root->data<x) return search(root->right,x);
}
