
#define max(X, Y) (X > Y ? X : Y)

int getHeight(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }

    return max(getHeight(root->left), getHeight(root->right)) + 1;
}