
void topViewLeft(struct node *root)
{
    if (!root)
    {
        return;
    }

    topViewLeft(root->left);
    
    printf("%i ", root->data);
}

void topViewRight(struct node *root)
{
    if (!root)
    {
        return;
    }

    printf("%i ", root->data);

    topViewRight(root->right);
}

void topView(struct node *root)
{
    topViewLeft(root->left);

    printf("%i ", root->data);

    topViewRight(root->right);
}