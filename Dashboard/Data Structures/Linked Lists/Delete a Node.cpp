
SinglyLinkedListNode *deleteNode(SinglyLinkedListNode *head, int position)
{
    SinglyLinkedListNode *curNode = head, *tempNode;
    if (position == 0)
    {
        tempNode = head;
        head = head->next;
        delete tempNode;
        tempNode = NULL;
        return head;
    }
    while (--position)
    {
        curNode = curNode->next;
    }
    tempNode = curNode->next;
    curNode->next = (curNode->next)->next;
    delete tempNode;
    tempNode = NULL;
    return head;
}