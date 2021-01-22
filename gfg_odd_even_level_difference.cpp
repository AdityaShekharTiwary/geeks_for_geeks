/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

/*You are required to complete this function*/
int getLevelDiff(Node *root)
{
   if(!root) return 0;
   queue<Node*>q;
   q.push(root);
   int level=0,sum_e=0,sum_o=0;
   while(!q.empty()){
       int size=q.size();
       int sum=0;
       while(size--){
           Node* temp=q.front();
           q.pop();
           sum+=temp->data;
           if(temp->left) q.push(temp->left);
           if(temp->right) q.push(temp->right);
       }
       if((level+1)%2==0) sum_e+=sum;
       else sum_o+=sum;
       level++;
   }
   return sum_o-sum_e;
}

