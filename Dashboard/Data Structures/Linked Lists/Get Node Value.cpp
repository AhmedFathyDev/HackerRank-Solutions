
int getNode(SinglyLinkedListNode *head, int positionFromTail)
{
    SinglyLinkedListNode *curNode = head;
    int length = 0;
    while (curNode)
    {
        curNode = curNode->next;
        length++;
    }
    length -= positionFromTail;
    curNode = head;
    while (--length)
    {
        curNode = curNode->next;
    }
    return curNode->data;
}