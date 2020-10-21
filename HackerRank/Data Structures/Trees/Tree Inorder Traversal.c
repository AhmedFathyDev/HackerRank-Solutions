
void inOrder(struct node *root)
{
    if (!root)
    {
        return;
    }

    inOrder(root->left);

    printf("%i ", root->data);

    inOrder(root->right);
}