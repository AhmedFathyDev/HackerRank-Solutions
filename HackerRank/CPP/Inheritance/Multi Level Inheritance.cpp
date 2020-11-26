
#include <iostream>

using namespace std;

class Triangle
{
public:
    void triangle(void)
    {
        cout << "I am a triangle\n";
    }
};

class Isosceles : public Triangle
{
public:
    void isosceles(void)
    {
        cout << "I am an isosceles triangle\n";
    }
};

class Equilateral : public Isosceles
{
public:
    void equilateral(void)
    {
        cout << "I am an equilateral triangle\n";
    }
};

int main(void)
{
    Equilateral eqr;

    eqr.equilateral();
    eqr.isosceles();
    eqr.triangle();

    return EXIT_SUCCESS;
}