
class LRUCache : public Cache
{
public:
    LRUCache(int capacity)
    {
        this->tail = NULL;
        this->head = NULL;
        this->cp = capacity;
    }

    void set(int pKey, int pValue)
    {
        if (this->mp.find(pKey) != this->mp.end())
        {
            this->mp[pKey]->value = pValue;
        }
        else
        {
            this->mp[pKey] = new Node(NULL, this->head, pKey, pValue);
            
            if (this->head)
            {
                this->head->prev = this->mp[pKey];
            }

            this->head = this->mp[pKey];

            if (!this->tail)
            {
                this->tail = this->head;
            }

            if (this->mp.size() > this->cp)
            {
                this->mp.erase(this->tail->key);
                this->tail = tail->prev;
                delete this->tail->next;
                this->tail->next = NULL;
            }
        }
    }
    int get(int pKey)
    {
        return this->mp.find(pKey) == this->mp.end() ? -1 : this->mp[pKey]->value;
    }
};