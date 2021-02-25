
void printLinkedList(SinglyLinkedListNode *head)
{
    while (head != NULL)
    {
        cout << head->data << "\n";
        head = head->next;
    }
}