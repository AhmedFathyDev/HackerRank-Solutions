
class Student
{
private:
    int scores[5];

public:
    void input(void)
    {
        for (size_t i = 0; i < 5; i++)
        {
            cin >> this->scores[i];
        }
    }

    int calculateTotalScore(void)
    {
        int sum = 0;

        for (size_t i = 0; i < 5; i++)
        {
            sum += this->scores[i];
        }

        return sum;
    }
};