
template <typename T>
struct Traits
{
private:
    static const string NAMES[];

public:
    static string name(int index)
    {
        if (index < 0 || index > 2)
        {
            return "unknown";
        }
        return NAMES[index];
    }
};

template <>
const string Traits<Fruit>::NAMES[] = {"apple", "orange", "pear"};

template <>
const string Traits<Color>::NAMES[] = {"red", "green", "orange"};