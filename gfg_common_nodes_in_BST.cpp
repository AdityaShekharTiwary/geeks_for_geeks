/*Node structure

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

// return a vector containing the intersection of the two BSTs in a sorted order



void duplicate(Node* root,unordered_set<int> &s,vector<int> &res){
    if(root){
        duplicate(root->left,s,res);
        if(s.find(root->data)!=s.end()) res.push_back(root->data);
        duplicate(root->right,s,res);
    }
}

void createset(Node* root,unordered_set<int> &s){
    if(root){
        createset(root->left,s);
        s.insert(root->data);
        createset(root->right,s);
    }
}

vector <int> printCommon(Node *root1, Node *root2)
{
     unordered_set<int>s;
     vector<int> res;
     createset(root1,s);
     duplicate(root2,s,res);
     return res;

}


