*

The structure of a BST node is as follows:

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
int getCount(Node *root, int l, int h)
{
    int count=0;
    if(!root) return 0;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        while(n--){
            Node* temp=q.front();
            q.pop();
            if(temp->data>=l && temp->data<=h) count++;
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
    return count;
}
