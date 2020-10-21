
void preOrder(struct node *root)
{
    if (!root)
    {
        return;
    }

    printf("%i ", root->data);

    preOrder(root->left);
    preOrder(root->right);
}