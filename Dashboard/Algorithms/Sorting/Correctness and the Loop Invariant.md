
# Correctness and the Loop Invariant
### [Back ⬅️](README.md)

## **C#** solution

```cs
namespace Challenge;

public static class Program
{
    private static void InsertionSort(IList<int> arr)
    {
        bool IsSorted(int index)
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
        
        for (var i = 1; i < arr.Count; ++i)
        {
            var key = arr[i];
            var j = i - 1;

            while (j >= 0 && key < arr[j])
            {
                arr[j + 1] = arr[j];
                --j;
            }

            arr[j + 1] = key;

            if (!IsSorted(i))
            {
                Console.WriteLine($"Sort Failed at index: {i} string: '{string.Join(", ", arr.Select(x => x.ToString()))}'");
            }
        }

        Console.WriteLine(string.Join(" ", arr));
    }

    public static void Main()
    {
        Console.ReadLine();
        
        InsertionSort(Console.ReadLine()!.Split(' ').ToList().Select(x => Convert.ToInt32(x)).ToArray());
    }
}
```