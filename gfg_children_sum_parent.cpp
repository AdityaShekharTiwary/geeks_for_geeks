int left_data = 0, right_data = 0;

    /* If node is NULL or it's a leaf node
    then return true */
    if(node == NULL ||
        (node->left == NULL &&
         node->right == NULL))
        return 1;
    else
    {
        /* If left child is not present then 0
        is used as data of left child */
        if(node->left != NULL)
        left_data = node->left->data;

        /* If right child is not present then 0
        is used as data of right child */
        if(node->right != NULL)
        right_data = node->right->data;

        /* if the node and both of its children
        satisfy the property return 1 else 0*/
        if((node->data == left_data + right_data)&&
            isSumProperty(node->left) &&
            isSumProperty(node->right))
        return 1;
        else
        return 0;
    }
