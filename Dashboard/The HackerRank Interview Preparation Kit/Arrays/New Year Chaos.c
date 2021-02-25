
void minimumBribes(int q_count, int *q)
{
    int ans = 0;

    int first = 1, second = 2, third = 3;

    for (size_t i = 0; i < q_count; i++)
    {
        if (q[i] == first)
        {
            first = second;
            second = third;
            ++third;
        }
        else if (q[i] == second)
        {
            ++ans;
            second = third;
            ++third;
        }
        else if (q[i] == third)
        {
            ans += 2;
            ++third;
        }
        else
        {
            printf("Too chaotic\n");
            return;
        }
    }
    printf("%i\n", ans);
}