
class MyBook : Book
{
protected:
    int price;

public:
    MyBook(string t, string a, int p) : Book(t, a)
    {
        this->price = p;
    }

    void display()
    {
        cout << "Title: " << this->title;
        cout << "\nAuthor: " << this->author;
        cout << "\nPrice: " << this->price;
    }
};