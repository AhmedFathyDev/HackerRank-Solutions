
SinglyLinkedListNode *removeDuplicates(SinglyLinkedListNode *head)
{
    SinglyLinkedListNode *curNode = head, *temp;

    while (curNode && curNode->next)
    {
        if (curNode->data == curNode->next->data)
        {
            temp = curNode->next;
            curNode->next = curNode->next->next;
            delete temp;
            temp = nullptr;
        }
        else
        {
            curNode = curNode->next;
        }
    }
    return head;
}