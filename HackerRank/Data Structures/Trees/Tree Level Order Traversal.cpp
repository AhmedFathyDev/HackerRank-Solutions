
void levelOrder(Node *root)
{
    queue<Node *> que;
    que.push(root);

    while (que.size())
    {
        root = que.front(), que.pop();

        cout << root->data << " ";

        if (root->left)
        {
            que.push(root->left);
        }

        if (root->right)
        {
            que.push(root->right);
        }
    }
}