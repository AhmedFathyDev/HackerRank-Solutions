
//  https://www.geeksforgeeks.org/print-nodes-top-view-binary-tree/

void topView(Node *root)
{
    map<int, Node *> mp;
    queue<pair<int, Node *>> que;

    que.push({0, root});

    for (auto i = que.front(); que.size(); que.pop(), i = que.front())
    {
        if (i.second)
        {
            mp.insert(i);
            que.push({i.first + 1, i.second->right});
            que.push({i.first - 1, i.second->left});
        }
    }

    for (auto i : mp)
    {
        cout << i.second->data << " ";
    }
}