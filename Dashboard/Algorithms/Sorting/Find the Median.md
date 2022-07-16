
# Find the Median
### [Back ⬅️](README.md)

## **C#** solution

```cs
namespace Challenge;

public static class Program
{
    private static int FindMedian(int[] arr)
    {
        Array.Sort(arr);

        return arr[arr.Length / 2];
    }

    public static void Main(string[] args)
    {
        Console.ReadLine();

        Console.WriteLine(FindMedian(
                Console.ReadLine()!.Split(' ').ToArray().Select(i => Convert.ToInt32(i)).ToArray()));
    }
}
```