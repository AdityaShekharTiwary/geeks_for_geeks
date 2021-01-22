/*
Structure of the node of the binary tree is
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
*/
// function should return level of the target node

void levelNode(struct Node *root, int target, int height, int &level)
{
    if(root)
    {
        if(root->data == target)
        {
            level = height;
        }

        levelNode(root->left,  target, height+1, level);
        levelNode(root->right, target, height+1, level);
    }
}

int getLevel(struct Node *root, int target)
{
    int level = -1;

    levelNode(root,  target, 1, level);

    return level == -1 ? 0 : level;
}
