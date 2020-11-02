
#include <iostream>
#include <string>

using namespace std;

struct Student
{
    int age;
    int standard;

    string first_name;
    string last_name;
};

int main(void)
{
    Student st;

    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    return EXIT_SUCCESS;
}