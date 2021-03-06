/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
vector<int> rightView(Node *root)
{
   vector<int>res;
   if(root==NULL) return res;
   queue<Node*> q;
   q.push(root);
   while(!q.empty()){
       int n=q.size();
       for(int i=0;i<n;i++){
           Node* temp=q.front();
           q.pop();
           if(i==0) res.push_back(temp->data);
           if(temp->right) q.push(temp->right);
           if(temp->left) q.push(temp->left);
       }
   }
   return res;
}

