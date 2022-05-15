
class Person
{
public:
    int age;
    Person(int initialAge);
    void amIOld();
    void yearPasses();
};

Person::Person(int initialAge)
{
    initialAge < 0 ? (cout << "Age is not valid, setting age to 0.\n", this->age = 0) : this->age = initialAge;
}

void Person::amIOld()
{
    cout << (this->age < 13 ? "You are young.\n" : (this->age < 18 ? "You are a teenager.\n" : "You are old.\n"));
}

void Person::yearPasses()
{
    this->age++;
}