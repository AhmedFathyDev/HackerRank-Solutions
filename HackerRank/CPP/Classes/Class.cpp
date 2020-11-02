
#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int age;
    int standard;
    string firstName;
    string lastName;

public:
    void setAge(int pAge)
    {
        this->age = pAge;
    }
    void setStandard(int pStandard)
    {
        this->standard = pStandard;
    }
    void setFirstName(string pFirstName)
    {
        this->firstName = pFirstName;
    }
    void setLastName(string pLastName)
    {
        this->lastName = pLastName;
    }

    int getAge(void)
    {
        return this->age;
    }
    int getStandard(void)
    {
        return this->standard;
    }
    string getFirstName(void)
    {
        return this->firstName;
    }
    string getLastName(void)
    {
        return this->lastName;
    }
};

int main(void)
{
    int age;
    int standard;
    string firstName;
    string lastName;

    cin >> age >> firstName >> lastName >> standard;

    Student fathy;

    fathy.setAge(age);
    fathy.setFirstName(firstName);
    fathy.setLastName(lastName);
    fathy.setStandard(standard);

    cout << fathy.getAge() << '\n';
    cout << fathy.getLastName() << ", " << fathy.getFirstName() << '\n';
    cout << fathy.getStandard() << "\n\n";

    cout << fathy.getAge() << ',' << fathy.getFirstName() << ',' << fathy.getLastName() << ',' << fathy.getStandard();

    return EXIT_SUCCESS;
}