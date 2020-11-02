
class Box
{
public:
    Box(void)
    {
        this->length = 0;
        this->breadth = 0;
        this->height = 0;
    }
    Box(int pLength, int pBreadth, int pHeight)
    {
        this->length = pLength;
        this->breadth = pBreadth;
        this->height = pHeight;
    }
    Box(Box *box)
    {
        this->length = box->length;
        this->breadth = box->breadth;
        this->height = box->height;
    }

    int getLength(void)
    {
        return this->length;
    }
    int getBreadth(void)
    {
        return this->breadth;
    }
    int getHeight(void)
    {
        return this->height;
    }

    long int CalculateVolume(void)
    {
        return (long int)this->length * (long int)this->breadth * this->height;
    }

    bool operator<(Box &box)
    {
        if (this->length < box.length)
        {
            return true;
        }
        else if (this->breadth < box.breadth && this->length == box.length)
        {
            return true;
        }
        else if (this->height < box.height && this->breadth == box.breadth && this->length == box.length)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    friend ostream &operator<<(ostream &out, Box &box)
    /*
     *  More information about friend fuction and friend class:
     *  https://www.geeksforgeeks.org/friend-class-function-cpp/
     */
    {
        out << box.length << " " << box.breadth << " " << box.height;
        return out;
    }

private:
    int length;
    int breadth;
    int height;
};