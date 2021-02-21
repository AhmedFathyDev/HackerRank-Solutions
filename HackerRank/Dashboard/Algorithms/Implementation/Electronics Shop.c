
#include <stdio.h>
#include <stdlib.h>

#define MAX(X, Y) (X > Y ? X : Y)

void swap(int *pX, int *pY)
{
    *pX ^= *pY;
    *pY ^= *pX;
    *pX ^= *pY;
}
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
int sort(int array[], int copied_array[], int start, int end)
{
    return start < end ? sort(array, copied_array, start, (start + end) / 2) + sort(array, copied_array, (start + end) / 2 + 1, end) + merge(array, copied_array, start, end) : 0;
}
void reverse(int *start, int *end)
{
    while (start < end)
    {
        swap(start++, end--);
    }
}

int main(void)
{
    int b, n, m, i, j, ans;
    scanf("%i %i %i", &b, &n, &m);

    int *keyboards = malloc(n * sizeof(int));
    int *copied_keyboards = malloc(n * sizeof(int));

    int *drives = malloc(m * sizeof(int));
    int *copied_drives = malloc(m * sizeof(int));

    for (i = 0; i < n; i++)
    {
        scanf("%i", (keyboards + i));
    }

    for (j = 0; j < m; j++)
    {
        scanf("%i", (drives + j));
    }

    sort(keyboards, copied_keyboards, 0, n - 1);
    sort(drives, copied_drives, 0, m - 1);

    reverse(drives, (drives + m - 1));

    free(copied_keyboards), copied_keyboards = NULL;
    free(copied_drives), copied_drives = NULL;

    i = 0, j = 0, ans = -1;
    while (i < n && j < m)
    {
        if (keyboards[i] + drives[j] == b)
        {
            ans = b;
            break;
        }
        else if (keyboards[i] + drives[j] > b)
        {
            j++;
        }
        else
        {
            ans = MAX(ans, keyboards[i] + drives[j]);
            i++;
        }
    }

    printf("%i", ans);

    free(keyboards), keyboards = NULL;
    free(drives), drives = NULL;

    return EXIT_SUCCESS;
}