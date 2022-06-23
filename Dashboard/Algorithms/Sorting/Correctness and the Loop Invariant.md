
# Correctness and the Loop Invariant
### [Back ⬅️](README.md)

## **C#** solution

```cs
public class Solution
{
    private static bool isSorted(int[] arr, int index)
    {
        for (var i = 0; i < index; ++i)
        {
            if (arr[i] > arr[i + 1])
            {
                return false;
            }
        }

        return true;
    }
    
    public static void InsertionSort(int[] arr)
    {
        for (var i = 1; i < arr.Length; ++i)
        {
            var arrI = arr[i];
            var j = i;

            for (; j > 0 && arrI < arr[j - 1]; --j)
            {
                arr[j] = arr[j - 1];
            }

            arr[j] = arrI;

            if (!Solution.isSorted(arr, j))
            {
                Console.WriteLine($"Sort Failed at index: {i - 1} string: '{string.Join(", ", arr.Select(x => x.ToString()))}'");
            }
        }

        Console.WriteLine(string.Join(" ", arr));
    }

    public static void Main(string[] args)
    {
        Console.ReadLine();
        
        InsertionSort(Console.ReadLine().Split(' ').ToList().Select(x => Convert.ToInt32(x)).ToArray());
    }
}
```