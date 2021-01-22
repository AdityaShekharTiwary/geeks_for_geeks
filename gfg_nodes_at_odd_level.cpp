/*Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// your task is to complete the function
void printOddNodes(Node *root)
{
    if(!root) {
        cout<<endl;
        return;
    }
    int level=1;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        while(n--){
            Node* temp=q.front();
            q.pop();
            if(level%2!=0) cout<<temp->data<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        level++;
    }
    cout<<endl;
}
