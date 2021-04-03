
class D : public A, public B, public C
{
    int val;

public:
    D(void)
    {
        val = 1;
    }

    void update_val(int new_val)
    {
        while (new_val > 1)
        {
            if (!(new_val & 1))
            {
                A::func(val);
                new_val /= 2;
            }
            else if (new_val % 3 == 0)
            {
                B::func(val);
                new_val /= 3;
            }
            else if (new_val % 5 == 0)
            {
                C::func(val);
                new_val /= 5;
            }
        }
    }
    void check(int);
};