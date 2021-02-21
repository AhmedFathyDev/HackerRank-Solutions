
SinglyLinkedListNode *mergeLists(SinglyLinkedListNode *head1, SinglyLinkedListNode *head2)
{
    SinglyLinkedListNode *head3;
    SinglyLinkedListNode *curNodeHead3;
    SinglyLinkedListNode *curNodeHead1 = head1;
    SinglyLinkedListNode *curNodeHead2 = head2;

    if ((curNodeHead1 != NULL && curNodeHead2 != NULL) && curNodeHead1->data <= curNodeHead2->data)
    {
        head3 = new SinglyLinkedListNode(curNodeHead1->data);
        head3->next = NULL;
        curNodeHead3 = head3;
        curNodeHead1 = curNodeHead1->next;
    }
    else if ((curNodeHead1 != NULL && curNodeHead2 != NULL) && curNodeHead1->data > curNodeHead2->data)
    {
        head3 = new SinglyLinkedListNode(curNodeHead2->data);
        head3->next = NULL;
        curNodeHead3 = head3;
        curNodeHead2 = curNodeHead2->next;
    }

    while (curNodeHead1 != NULL && curNodeHead2 != NULL)
    {
        if (curNodeHead1->data <= curNodeHead2->data)
        {
            curNodeHead3->next = new SinglyLinkedListNode(curNodeHead1->data);
            curNodeHead3 = curNodeHead3->next;
            curNodeHead1 = curNodeHead1->next;
            curNodeHead3->next = NULL;
        }
        else
        {
            curNodeHead3->next = new SinglyLinkedListNode(curNodeHead2->data);
            curNodeHead3 = curNodeHead3->next;
            curNodeHead2 = curNodeHead2->next;
            curNodeHead3->next = NULL;
        }
    }

    while (curNodeHead1 != NULL)
    {
        curNodeHead3->next = new SinglyLinkedListNode(curNodeHead1->data);
        curNodeHead3 = curNodeHead3->next;
        curNodeHead1 = curNodeHead1->next;
        curNodeHead3->next = NULL;
    }

    while (curNodeHead2 != NULL)
    {
        curNodeHead3->next = new SinglyLinkedListNode(curNodeHead2->data);
        curNodeHead3 = curNodeHead3->next;
        curNodeHead2 = curNodeHead2->next;
        curNodeHead3->next = NULL;
    }
    
    return head3;
}