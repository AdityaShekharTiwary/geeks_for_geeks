/*
Structure of the Node of the tree is
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};*/
// Your task is to complete this function
// function shoudl return the required sum
int minLeafSum(Node* root)
{
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return root->data;
    map <int,int> mp;
	queue <Node*> q;
	int lvl=1;
	q.push(root);
	while(!q.empty())
	{
	    int n=q.size();
	    Node* t;
	    while(n--)
	    {
	        t=q.front(); q.pop();
	        if(t->left==NULL && t->right==NULL) mp[lvl]+=t->data;
	        if(t->left!=NULL) q.push(t->left);
	         if(t->right!=NULL) q.push(t->right);
	    }
	    lvl++;
	}
    return mp.begin()->second;
}
