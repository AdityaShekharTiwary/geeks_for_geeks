/*Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// function should return the sum of all
// right leaf nodes

void solve(Node* root,int &sum){
    if(root){
        if(root->right){
            if(!root->right->left && !root->right->right) sum+=root->right->data;
        }
        solve(root->left,sum);
        solve(root->right,sum);
    }
}

int rightLeafSum(Node* root)
{
     int sum=0;
     solve(root,sum);
     return sum;
}
