
class BadLengthException : exception
{
private:
    int length;

public:
    BadLengthException(int pLength)
    {
        this->length = pLength;
    }

    int what(void)
    {
        return this->length;
    }
};