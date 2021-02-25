
#include <stdio.h>
#include <stdlib.h>

#define MAX(X, Y) (X > Y ? X : Y)

int merge(int array[], int copied_array[], int start, int end)
{
    int i = start, k = start, j = (start + end) / 2 + 1, inversions = 0;
    while ((i <= (start + end) / 2) && (j <= end))
    {
        if (array[i] <= array[j])
        {
            copied_array[k++] = array[i++];
        }
        else
        {
            copied_array[k++] = array[j++];
            inversions += (start + end) / 2 + 1 - i;
        }
    }
    while (i <= (start + end) / 2)
    {
        copied_array[k++] = array[i++];
    }
    while (j <= end)
    {
        copied_array[k++] = array[j++];
    }
    for (i = start; i <= end; i++)
    {
        array[i] = copied_array[i];
    }
    return inversions;
}
int sort(int *array, int *copied_array, int start, int end)
{
    return start < end ? sort(array, copied_array, start, (start + end) / 2) + sort(array, copied_array, (start + end) / 2 + 1, end) + merge(array, copied_array, start, end) : 0;
}

int main(void)
{
    int n, m, *stations, *copied_stations, max_distance, i;

    scanf("%i %i", &n, &m);

    stations = malloc(m * sizeof(int));
    copied_stations = malloc(m * sizeof(int));

    for (i = 0; i < m; i++)
    {
        scanf("%i", (stations + i));
    }

    sort(stations, copied_stations, 0, m - 1);

    for (i = 1, max_distance = stations[0]; i < m; i++)
    {
        max_distance = MAX(max_distance, (stations[i] - stations[i - 1]) / 2);
    }

    max_distance = MAX(max_distance, n - 1 - stations[m - 1]);

    printf("%i", max_distance);

    return EXIT_SUCCESS;
}