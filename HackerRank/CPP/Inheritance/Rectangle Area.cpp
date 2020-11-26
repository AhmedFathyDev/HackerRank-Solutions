
#include <iostream>

using namespace std;

class Rectangle
{
public:
    virtual void display(void)
    {
        cout << this->width << " " << this->height << "\n";
    }

protected:
    int height;
    int width;

};

class RectangleArea : public Rectangle
{
public:
    void display(void)
    {
        cout << this->width * this->height << "\n";
    }
    void read_input(void)
    {
        cin >> this->width >> this->height;
    }
    
};