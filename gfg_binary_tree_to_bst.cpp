/* The Node structure is
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// The given root is the root of the Binary Tree
// Return the root of the generated BST

void convert(Node* root,vector<int> &v){
    if(!root) return ;
    convert(root->left,v);
    v.push_back(root->data);
    convert(root->right,v);
}

void solve(Node* root,vector<int> &v,int &i){
    if(!root) return ;
    solve(root->left,v,i);
    root->data=v[i++];
    solve(root->right,v,i);
}
Node *binaryTreeToBST (Node *root)
{
    vector<int> v;
    convert(root,v);
    sort(v.begin(),v.end());
    int i=0;
    solve(root,v,i);
    return root;
}
