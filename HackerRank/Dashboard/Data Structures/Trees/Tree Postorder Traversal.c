
void postOrder(struct node *root)
{
    if (!root)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);

    printf("%i ", root->data);
}