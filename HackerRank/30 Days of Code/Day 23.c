
#define max(X, Y) (X > Y ? X : Y)

int getHeight(Node *root)
{
    if (!root)
    {
        return 0;
    }

    return max(getHeight(root->left), getHeight(root->right)) + 1;
}

void printLevel(Node *root, int l)
{
    if (!root)
    {
        return;
    }
    else if (!l)
    {
        printf("%i ", root->data);
    }
    else
    {
        printLevel(root->left, l - 1);
        printLevel(root->right, l - 1);
    }
}

void levelOrder(Node *root)
{
    int h = getHeight(root);

    for (size_t i = 0; i < h; i++)
    {
        printLevel(root, i);
    }
}