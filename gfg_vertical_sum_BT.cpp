/*Complete the function below
Node is as follows:
struct Node{
int data;
Node *left,*right;
};
*/
map<int,int>m;
void solve(Node* root,int h){
    if(!root) return;
    m[h]+=root->data;
    solve(root->left,h-1);
    solve(root->right,h+1);

}

vector <int> verticalSum(Node *root) {
    vector<int> res;
    if(!root) return res;
    solve(root,0);
    for(auto x:m) res.push_back(x.second);
    m.clear();
    return res;
}
