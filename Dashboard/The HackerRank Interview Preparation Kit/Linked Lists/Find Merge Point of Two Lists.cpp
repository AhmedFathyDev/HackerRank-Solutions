
int findMergeNode(SinglyLinkedListNode *head1, SinglyLinkedListNode *head2)
{
    SinglyLinkedListNode *curNodeHead1 = head1, *curNodeHead2;
    int ans;
    bool b = 0;

    while (curNodeHead1)
    {
        curNodeHead2 = head2;

        while (curNodeHead2)
        {
            if (curNodeHead1 == curNodeHead2)
            {
                ans = curNodeHead1->data;
                b = 1;
                break;
            }

            curNodeHead2 = curNodeHead2->next;
        }

        if (b)
        {
            break;
        }
        
        curNodeHead1 = curNodeHead1->next;
    }

    return ans;
}