
SinglyLinkedListNode *insertNodeAtTail(SinglyLinkedListNode *head, int data)
{
    SinglyLinkedListNode *newNode = new SinglyLinkedListNode(data), *curNode;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        return head;
    }
    curNode = head;
    while (curNode->next != NULL)
    {
        curNode = curNode->next;
    }
    curNode->next = newNode;
    return head;
}