/*Complete the function below

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

// Return the Kth smallest element in the given BST

vector<int> inorder(Node* root,vector<int> &arr){
    if(root){
        inorder(root->left,arr);
        arr.push_back(root->data);
        inorder(root->right,arr);
    }
    return arr;
}
int KthSmallestElement(Node *root, int K)
{
    if(!root) return 0;
    vector<int>arr;
    inorder(root,arr);
    if(K>arr.size()) return -1;
    else return arr[K-1];
}
