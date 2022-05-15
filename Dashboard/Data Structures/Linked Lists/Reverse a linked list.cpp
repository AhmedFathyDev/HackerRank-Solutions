
SinglyLinkedListNode *reverse(SinglyLinkedListNode *head)
{
    list<int> ls;
    SinglyLinkedListNode *curNode = head;

    while (curNode != NULL)
    {
        ls.push_back(curNode->data);
        curNode = curNode->next;
    }

    reverse(ls.begin(), ls.end());
    curNode = head;

    while (curNode != NULL)
    {
        curNode->data = ls.front();
        ls.pop_front();
        curNode = curNode->next;
    }
    
    return head;
}