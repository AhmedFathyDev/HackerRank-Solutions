
Node *insert(Node *head, int data)
{
    Node *temp = malloc(sizeof(Node));

    temp->data = data;
    temp->next = NULL;

    Node **currPos = &head;

    while (*currPos != NULL)
    {
        currPos = &(*currPos)->next;
    }

    *currPos = temp;

    return head;
}