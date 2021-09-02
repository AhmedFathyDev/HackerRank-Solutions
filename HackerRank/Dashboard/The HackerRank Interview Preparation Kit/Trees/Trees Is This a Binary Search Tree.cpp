
vector<int> nodes;

void inOrder(Node *root)
{
    if (!root)
    {
        return;
    }

    inOrder(root->left);

    nodes.push_back(root->data);

    inOrder(root->right);
}

bool checkBST(Node *root)
{
    inOrder(root);

    for (size_t i = 1; i < nodes.size(); i++)
    {
        if (nodes[i] <= nodes[i - 1])
        {
            return false;
        }
    }

    return true;
}