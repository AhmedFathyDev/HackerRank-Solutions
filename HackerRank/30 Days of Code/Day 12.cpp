
class Student : public Person
{
private:
    vector<int> testScores;

public:
    Student(string firstName, string lastName, int id, vector<int> scores)
        : Person(firstName, lastName, id), testScores(scores)
    {
    }

    char calculate(void)
    {
        double a = 0.0;

        for (int score : testScores)
        {
            a += score;
        }

        a /= testScores.size();

        return a < 40.0 ? 'T' : (a < 55.0 ? 'D' : (a < 70.0 ? 'P' : (a < 80.0 ? 'A' : (a < 90.0 ? 'E' : 'O'))));
    }
};