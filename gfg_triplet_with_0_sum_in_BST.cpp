/*Complete the function below
Node is as follows:
struct node
{
    int key;
    struct node *left;
    struct node *right;
};
*/
void convert(node *root,vector<int> &arr){
    if(root){
        convert(root->left,arr);
        arr.push_back(root->key);
        convert(root->right,arr);
    }
}

bool check(vector<int> &arr,int start,int end,int x){
    while(start<end){
        if(arr[start]+arr[end]==x) return true;
        if(arr[start]+arr[end]>x) end--;
        else start++;
    }
    return false;
}

bool triple(vector<int> arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(check(arr,i+1,n-1,-arr[i])==true) return true;
    }
    return false;
}

bool isTripletPresent(node *root)
{
    vector<int> arr;
    convert(root,arr);
    return triple(arr);
}
