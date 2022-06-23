
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
    
    private static void insertionSort(int[] arr)
    {
        for (var i = 1; i < arr.Length; ++i)
        {
            var key = arr[i];
            var j = i - 1;

            while (j >= 0 && key < arr[j])
            {
                arr[j + 1] = arr[j];
                --j;
            }

            arr[j + 1] = key;

            if (!Solution.isSorted(arr, i))
            {
                Console.WriteLine($"Sort Failed at index: {i} string: '{string.Join(", ", arr.Select(x => x.ToString()))}'");
            }
        }

        Console.WriteLine(string.Join(" ", arr));
    }

    public static void Main(string[] args)
    {
        Console.ReadLine();
        
        insertionSort(Console.ReadLine()!.Split(' ').ToList().Select(x => Convert.ToInt32(x)).ToArray());
    }
}
```