
#include <iostream>
#include <queue>

#define endl "\n"

struct Node
{
    int data;
    int level;
    Node *left;
    Node *right;

    Node(int pData, int pLevel)
    {
        this->data = pData;
        this->level = pLevel;
        this->left = NULL;
        this->right = NULL;
    }
};

void swapChildNodes(Node *root, int level)
{
    if (root)
    {
        if (root->level == level)
        {
            Node *temp = root->left;
            root->left = root->right;
            root->right = temp;
        }

        swapChildNodes(root->left, level);
        swapChildNodes(root->right, level);
    }
}

void inOrder(Node *root)
{
    if (!root)
    {
        return;
    }

    inOrder(root->left);

    std::cout << root->data << " ";

    inOrder(root->right);
}

int main(void)
{
    std::ios_base::sync_with_stdio(false);

    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n, level, t;

    std::cin >> n;

    std::queue<Node *> que;

    Node *root = new Node(1, 1);
    Node *curRoot = root;

    que.push(curRoot);

    while (n--)
    {
        curRoot = que.front(), que.pop();
        if (curRoot)
        {
            int l, r;

            std::cin >> l >> r;

            level = curRoot->level + 1;

            curRoot->left = l != -1 ? new Node(l, level) : NULL;
            curRoot->right = r != -1 ? new Node(r, level) : NULL;

            que.push(curRoot->left);
            que.push(curRoot->right);
        }
        else
        {
            n++;
        }
    }

    std::cin >> t;

    while (t--)
    {
        int k;

        std::cin >> k;

        for (int i = 1; i * k < level; i++)
        {
            swapChildNodes(root, i * k);
        }

        inOrder(root);

        std::cout << endl;
    }

    return EXIT_SUCCESS;
}