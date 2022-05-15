
Node *removeDuplicates(Node *head)
{
    Node *curPos, *prePos;

    if (head)
    {
        curPos = head->next;
        prePos = head;

        while (curPos)
        {
            if (curPos->data == prePos->data)
            {
                prePos->next = curPos->next;
                free(curPos);
                curPos = prePos->next;
            }
            else
            {
                prePos = curPos;
                curPos = curPos->next;
            }
        }
    }
    
    return head;
}