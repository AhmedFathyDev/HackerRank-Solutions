
Node *insert(Node *root, int data)
{
    if (root)
    {
        Node *currentNode;

        if (data > root->data)
        {
            currentNode = this->insert(root->right, data);
            root->right = currentNode;
        }
        else
        {
            currentNode = this->insert(root->left, data);
            root->left = currentNode;
        }
    }
    else
    {
        root = new Node(data);
    }

    return root;
}