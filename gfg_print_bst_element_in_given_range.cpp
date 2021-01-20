/* The structure of a BST Node is as follows:

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

// returns an array of node values in the BST (rooted at 'root')
// that lie in the given range [low, high]

void solve(Node *root,int low,int high,vector<int> &res){
    if(root){
        solve(root->left,low,high,res);
        if(root->data>=low && root->data<=high) res.push_back(root->data);
        solve(root->right,low,high,res);
    }
}
vector<int> printNearNodes(Node *root, int low, int high)
{
  vector<int> res;
  solve(root,low,high,res);
  return res;
}
