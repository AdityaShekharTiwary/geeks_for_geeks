/*
 A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

/*You are required to complete this method */
bool isHeap(Node *root)
{
     queue<Node*>q;
     q.push(root);
     while(!q.empty()){
         int n=q.size();
         while(n--){
             Node* temp=q.front();
             q.pop();
             if(temp->left){
                 if(temp->left->data>temp->data) return false;
                 q.push(temp->left);
             }
             if(temp->right){
                 if(temp->right->data>temp->data) return false;
             }
         }
     }
     return true;
}
