
void decode_huff(node *root, string s)
{
    node *temp = root;
    for (size_t i = 0; i < s.size(); i++)
    {
        temp = s[i] == '0' ? temp->left : temp->right;

        if (temp->data)
        {
            cout << temp->data;
            temp = root;
        }
    }
}