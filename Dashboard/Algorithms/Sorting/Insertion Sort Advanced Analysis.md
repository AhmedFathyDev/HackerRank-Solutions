
# Insertion Sort Advanced Analysis
### [Back ⬅️](README.md)

## **C#** solution

```cs
namespace Challenge;

public static class Program
{
    private static long Merge(IList<int> arr, IList<int> tempArr, int left, int middle1, int middle2, int right)
    {
        long inversions = 0;
        var leftIndex = left;
        var rightIndex = middle2;
        var combinedIndex = left;

        while (leftIndex <= middle1 && rightIndex <= right)
        {
            if (arr[leftIndex] <= arr[rightIndex])
            {
                tempArr[combinedIndex++] = arr[leftIndex++];
            }
            else
            {
                tempArr[combinedIndex++] = arr[rightIndex++];
                inversions += middle2 - leftIndex;
            }
        }

        while (leftIndex <= middle1)
        {
            tempArr[combinedIndex++] = arr[leftIndex++];
        }

        while (rightIndex <= right)
        {
            tempArr[combinedIndex++] = arr[rightIndex++];
        }

        for (var i = left; i <= right; i++)
        {
            arr[i] = tempArr[i];
        }

        return inversions;
    }

    private static long MergeSort(IList<int> arr, IList<int> tempArr, int firstIndex, int lastIndex)
    {
        return firstIndex < lastIndex ?
            MergeSort(arr, tempArr, firstIndex, (firstIndex + lastIndex) / 2) +
            MergeSort(arr, tempArr, (firstIndex + lastIndex) / 2 + 1, lastIndex) +
            Merge(arr, tempArr, firstIndex, (firstIndex + lastIndex) / 2, (firstIndex + lastIndex) / 2 + 1, lastIndex) : 0;
    }
    
    private static long Sort(IList<int> arr)
    {
        var tempArr = new int[arr.Count];
        return MergeSort(arr, tempArr, 0, arr.Count - 1);
    }

    public static void Main(string[] args)
    {
        var t = Convert.ToInt32(Console.ReadLine());

        while (t-- > 0)
        {
            Console.ReadLine();
            
            Console.WriteLine(Sort(Console.ReadLine()!
                .Split(' ').ToArray().Select(x => Convert.ToInt32(x)).ToArray()));
        }
    }
}
```