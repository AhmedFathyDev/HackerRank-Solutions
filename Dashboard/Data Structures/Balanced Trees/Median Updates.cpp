
#include <iostream>
#include <stdexcept>

#define MAX(X, Y) (X > Y ? X : Y)

struct Node
{
    int value;
    int height;

    Node *left;
    Node *right;

    Node(int);

    int nodeHeight(void);
    void updateHeight(void);

    Node *rotateLeft(void);
    Node *rotateRight(void);

    static void deleteNode(Node *&);
    static Node *insert(Node *, int);
    static Node *balance(Node *, int);
};

class Tree
{
public:
    Tree(void);

    void put(int);
    void remove(int);

    void getMedian(void);

private:
    Node *root;
};

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n;

    std::cin >> n;

    Tree tree;

    while (n--)
    {
        char ch;
        int x;

        std::cin >> ch >> x;

        switch (ch)
        {
        case 'a':
            tree.put(x);
            tree.getMedian();

            break;
        case 'r':
            try
            {
                tree.remove(x);
                tree.getMedian();
            }
            catch (const std::invalid_argument &ia)
            {
                std::cout << ia.what();
            }

            break;
        }
    }

    return EXIT_SUCCESS;
}

Node *findItem(Node *root, int item)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (item < root->value)
    {
        return findItem(root->left, item);
    }
    else if (item > root->value)
    {
        return findItem(root->right, item);
    }
    else
    {
        return root;
    }
}
void deleteItem(Node *&root, int item)
{
    if (item < root->value)
    {
        deleteItem(root->left, item);
    }
    else if (item > root->value)
    {
        deleteItem(root->right, item);
    }
    else
    {
        Node::deleteNode(root);
    }
}
void getPredecessor(Node *root, int &item)
{
    while (root->right != NULL)
    {
        root = root->right;
    }

    item = root->value;
}

Node::Node(int item)
{
    this->height = 0;
    this->value = item;
    this->left = this->right = NULL;
}

int Node::nodeHeight(void)
{
    if (this)
    {
        return 1 + MAX(this->left->nodeHeight(), this->right->nodeHeight());
    }

    return -1;
}
void Node::updateHeight(void)
{
    if (this)
    {
        this->height = 1 + MAX(this->left->nodeHeight(), this->right->nodeHeight());
    }
}

Node *Node::rotateRight(void)
{
    Node *tempRoot = this->left;
    Node *tempLeft = tempRoot->right;

    tempRoot->right = this;
    this->left = tempLeft;

    tempRoot->updateHeight();
    this->updateHeight();

    return tempRoot;
}
Node *Node::rotateLeft(void)
{
    Node *tempRoot = this->right;
    Node *tempRight = tempRoot->left;

    tempRoot->left = this;
    this->right = tempRight;

    tempRoot->updateHeight();
    this->updateHeight();

    return tempRoot;
}

void Node::deleteNode(Node *&root)
{
    Node *tempPtr = root;
    if (root->left == NULL)
    {
        root = root->right;
        delete tempPtr;
    }
    else if (root->right == NULL)
    {
        root = root->left;
        delete tempPtr;
    }
    else
    {
        int item;
        getPredecessor(root->left, item);
        root->value = item;
        deleteItem(root->left, item);
    }
}
Node *Node::insert(Node *root, int item)
{
    if (item > root->value)
    {
        root->right = insert(root->right, item);
    }
    else if (item < root->value)
    {
        root->left = insert(root->left, item);
    }

    root->updateHeight();

    return Node::balance(root, item);
}
Node *Node::balance(Node *root, int item)
{
    int balanceFactor = root->left->nodeHeight() - root->right->nodeHeight();

    if (balanceFactor > 1)
    {
        if (item < root->left->value)
        {
            return root->rotateRight();
        }
        else
        {
            root->left = root->left->rotateLeft();
            return root->rotateRight();
        }
    }
    if (balanceFactor < -1)
    {
        if (item > root->right->value)
        {
            return root->rotateLeft();
        }
        else
        {
            root->right = root->right->rotateRight();
            return root->rotateLeft();
        }
    }

    return root;
}

Tree::Tree(void)
{
    this->root = NULL;
}

void Tree::put(int item)
{
    if (!this->root)
    {
        this->root = new Node(item);
    }
    else
    {
        this->root = Node::insert(this->root, item);
    }
}
void Tree::remove(int item)
{
    Node *tempPtr = findItem(this->root, item);
    if (tempPtr)
    {
        Node::deleteNode(tempPtr);
    }
    else
    {
        throw std::invalid_argument("Wrong!\n");
    }
}

void Tree::getMedian(void)
{
    /////
    /////
    /////
}