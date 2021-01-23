/*The Node structure is

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

// Return the minimum absolute difference between any tree node and the integer K
int minDiff(Node *root, int k)
{
    if(!root) return 0;
    int diff=INT_MAX;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        while(n--){
            Node* temp=q.front();
            q.pop();
            if(abs(k-temp->data)<diff) diff=abs(k-temp->data);
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
    return diff;
}
