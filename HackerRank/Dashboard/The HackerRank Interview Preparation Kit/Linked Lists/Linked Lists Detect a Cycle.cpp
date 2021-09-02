
#include <map>

bool has_cycle(Node *head)
{
    map<Node *, int> mp;

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