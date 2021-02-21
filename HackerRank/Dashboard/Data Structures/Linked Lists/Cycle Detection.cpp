
bool has_cycle(SinglyLinkedListNode *head)
{
    map<SinglyLinkedListNode *, int> mp;

    while (head)
    {
        mp[head]++;
        if (mp[head] > 1)
        {
            return 1;
        }
        head = head->next;
    }
    
    return 0;
}