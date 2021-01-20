multimap<int, int> m;
void getLevelOrder(Node *root){
    int n=0;
    queue<pair<Node *,int>> q;
    q.push({root,0});
    while(!q.empty()){
        pair<Node *,int> curr=q.front();
        q.pop();
        m.insert({curr.second,curr.first->data});
        if(curr.first->left){
            q.push({curr.first->left,curr.second-1});
            //q.push({curr.first->right,curr.second+1});
        }
        if(curr.first->right){
            //q.push({curr.first->left,curr.second-1});
            q.push({curr.first->right,curr.second+1});
        }
    }
}

vector<int> verticalOrder(Node *root)
{
    vector<int>res;
    if(root)
    getLevelOrder(root);
    for(auto x:m)
        res.push_back(x.second);
    m.clear();
    return res;
}

