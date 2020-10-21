
int marks_summation(int *marks, int number_of_students, char gender)
{
    int i, sum;
    sum = 0;
    for (i = 0; i < number_of_students; i++)
    {
        if (gender == 'g')
        {
            if (i & 1)
            {
                sum += *(marks + i);
            }
        }
        else
        {
            if (!(i & 1))
            {
                sum += *(marks + i);
            }
        }
    }
    return sum;
}