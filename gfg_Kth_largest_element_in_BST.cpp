/*The Node structure is defined as
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

// return the Kth largest element in the given BST rooted at 'root'
void solve(Node* root,int k,int &idx,int &res){
    if(root){
        solve(root->right,k,idx,res);
        if(idx==k) res=root->data;
        idx++;
        solve(root->left,k,idx,res);
    }
}
int kthLargest(Node *root, int k)
{
    int idx=1;
    int res=-1;
    solve(root,k,idx,res);
    return res;
}
