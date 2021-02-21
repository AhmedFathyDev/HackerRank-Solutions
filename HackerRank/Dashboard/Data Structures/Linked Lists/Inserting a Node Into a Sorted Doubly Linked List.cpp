
DoublyLinkedListNode *sortedInsert(DoublyLinkedListNode *head, int data)
{
    DoublyLinkedListNode *newNode = new DoublyLinkedListNode(data), *curNode = head;
    if (head == NULL)
    {
        head = newNode;
        return head;
    }

    if (data <= head->data)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return head;
    }

    while (curNode->next)
    {
        if (data <= curNode->data)
        {
            newNode->next = curNode;
            newNode->prev = curNode->prev;
            curNode->prev->next = newNode;
            curNode->prev = newNode;
            return head;
        }

        curNode = curNode->next;
    }

    if (data <= curNode->data)
    {
        newNode->next = curNode;
        newNode->prev = curNode->prev;
        curNode->prev->next = newNode;
        curNode->prev = newNode;
        return head;
    }

    newNode->prev = curNode;
    curNode->next = newNode;
    return head;
}