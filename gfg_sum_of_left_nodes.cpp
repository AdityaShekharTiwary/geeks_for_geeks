bool isleaf(TreeNode* node){
        if(node==NULL) return false;
        if(node->left==NULL && node->right==NULL) return true;
        return false;
    }

    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        if(root){
            if(isleaf(root->left))
                sum+=root->left->val;
            else sum+=sumOfLeftLeaves(root->left);
            sum+=sumOfLeftLeaves(root->right);
        }
        return sum;
    }
