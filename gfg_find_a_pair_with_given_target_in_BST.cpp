/*Complete the function below
Node is as follows
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

// root : the root Node of the given BST
// target : the target sum

bool Util(Node* root, int sum, map<int, int>&m)
{
    if(!root)
        return false;
    int diff = sum - root->data;
    if(m.find(diff) != m.end())
        return true;
    m[root->data] = 1;

    if(Util(root->left, sum, m))
        return true;
    if(Util(root->right, sum, m))
        return true;
    return false;

}
int isPairPresent(struct Node *root, int target)
{
//add code here.
    if(!root)
        return false;
    while(root && root->data > target)
    {
        root = root->left;
    }

    map<int, int>m;
    if(root)
        return Util(root, target, m);
    return false;
}
