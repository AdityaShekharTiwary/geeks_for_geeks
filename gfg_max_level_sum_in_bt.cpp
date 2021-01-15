void calLevelSum(Node *root, int level, map<int, int=""> &mp)
{
    if(root)
    {
        mp[level] += root->data;

        calLevelSum(root->left,  level+1, mp);
        calLevelSum(root->right, level+1, mp);
    }
}

int maxLevelSum(Node* root)
{
    map<int, int=""> mp;
    int level = 0;

    calLevelSum(root, level, mp);

    int maxLevel = 0, maxVal = INT_MIN;

    for(auto x: mp)
    {
        int val   = x.second;

        maxVal = max(maxVal, val);
    }

    return maxVal;
}
