
DoublyLinkedListNode *reverse(DoublyLinkedListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    DoublyLinkedListNode *nextNode = head->next;
    head->next = head->prev;
    DoublyLinkedListNode *newHead = reverse(nextNode);
    nextNode->next = head;
    return newHead;
}