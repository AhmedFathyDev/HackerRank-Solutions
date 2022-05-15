
SinglyLinkedListNode *insertNodeAtPosition(SinglyLinkedListNode *head, int data, int position)
{
    SinglyLinkedListNode *newNode = new SinglyLinkedListNode(data), *curNode = head;
    while (--position)
    {
        curNode = curNode->next;
    }
    newNode->next = curNode->next;
    curNode->next = newNode;
    return head;
}