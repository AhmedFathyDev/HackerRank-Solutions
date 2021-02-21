
void reversePrint(SinglyLinkedListNode *head)
{
    if (head == NULL)
    {
        return;
    }
    reversePrint(head->next);
    cout << head->data << "\n";
}