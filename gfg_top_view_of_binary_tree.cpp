void topView(struct Node *root)
{
     if(!root) return;
     map<int,int> m;
     queue<pair<Node*,int>>q;
     q.push({root,0});
     while(!q.empty()){
         Node* temp=q.front().first;
         int h=q.front().second;
         q.pop();
         if(!m[h]) m[h]=temp->data;
         if(temp->left) q.push({temp->left,h-1});
         if(temp->right) q.push({temp->right,h+1});
     }

     for(auto x:m) cout<<x.second<<" ";
}
