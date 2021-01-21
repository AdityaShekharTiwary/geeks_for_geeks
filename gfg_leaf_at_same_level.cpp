/* The structure of the binary tree is as follows
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

/*You are required to complete this method*/
int max_depth(Node* root){
    if(!root) return 0;
    return max(max_depth(root->left),max_depth(root->right))+1;
}

int min_depth(Node* root){
    if(!root) return INT_MAX;
    if(!root->left && !root->right) return 1;
    return min(min_depth(root->left),min_depth(root->right))+1;
}

bool check(Node *root)
{
    return max_depth(root)==min_depth(root);
}
