
template <class T>
class AddElements
{
public:
    AddElements(const T &obj) : element(obj) {}

    T add(const T &obj)
    {
        return this->element + obj;
    }
    T concatenate(const T &obj)
    {
        return this->element + obj;
    }

private:
    T element;
};

bool fast(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}

static bool r = fast();