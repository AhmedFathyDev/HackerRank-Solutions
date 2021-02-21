
#define MAX(X, Y) (X > Y ? X : Y)

int getHeight(struct node *root)
{
    if (!root)
    {
        return -1;
    }

    return MAX(getHeight(root->left), getHeight(root->right)) + 1;
}