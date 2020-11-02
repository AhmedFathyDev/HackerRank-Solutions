
class Person
{
public:
    int age;

    string name;

    //  Read this: https://www.geeksforgeeks.org/virtual-function-cpp/

    virtual void getdata(void)
    {
        cin >> this->name >> this->age;
    }
    virtual void putdata(void)
    {
        cout << this->name << " " << this->age << '\n';
    }
};

class Student : public Person
{
    static int id;

    int cur_id;
    int marks[6];

public:
    Student(void)
    {
        cur_id = ++Student::id;
    }

    void getdata(void)
    {
        cin >> this->name >> this->age;
        for (size_t i = 0; i < 6; i++)
        {
            cin >> marks[i];
        }
    }
    void putdata(void)
    {
        int sum = 0;

        cout << this->name << " " << this->age << " ";
        for (size_t i = 0; i < 6; i++)
        {
            sum += marks[i];
        }
        cout << sum << " " << this->cur_id << '\n';
    }
};

int Student::id = 0;

class Professor : public Person
{
    static int id;

    int cur_id;
    int publications;

public:
    Professor(void)
    {
        cur_id = ++Professor::id;
    }

    void getdata(void)
    {
        cin >> this->name >> this->age >> this->publications;
    }
    void putdata(void)
    {
        cout << this->name << " " << this->age << " " << this->publications << " " << this->cur_id << '\n';
    }
};

int Professor::id = 0;