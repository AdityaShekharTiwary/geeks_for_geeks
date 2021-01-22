/*Complete the function below
Node is as follows:
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

// Return the level (0-indexed) with maximum number of nodes.
int maxNodeLevel(Node *root)
{
     int maxnode=0;
     int maxlevel=0;
     int level=0;

     queue<Node*> q;
     q.push(root);
     while(!q.empty()){
         int n=q.size();
         if(maxnode<n){
             maxnode=n;
             maxlevel=level;
         }
         while(n--){
             Node* temp=q.front();
             q.pop();
             if(temp->left) q.push(temp->left);
             if(temp->right) q.push(temp->right);
         }
         level++;
     }
     return maxlevel;
}
