void calc(Node*root,unordered_set<int>&s,int hd)
{
    if(root==NULL)
    return;
    calc(root->left,s,hd-1);
    s.insert(hd);
    calc(root->right,s,hd+1);
}

int verticalWidth(Node* root)
{
    unordered_set <int>s;

    calc(root,s,0);
    return s.size();

}
