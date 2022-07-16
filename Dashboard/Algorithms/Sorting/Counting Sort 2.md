
# Counting Sort 2
### [Back ⬅️](README.md)

## **C#** solution

```cs
namespace Challenge;

public static class Program
{
    private static int[] CountingSort(IEnumerable<int> arr)
    {
        var freqArr = new int[100];

        foreach (var i in arr)
        {
            ++freqArr[i];
        }

        return freqArr;
    }

    public static void Main(string[] args)
    {
        Console.ReadLine();
        
        var freqArr = CountingSort(Console.ReadLine()!.Split(' ').ToArray().Select(i => Convert.ToInt32(i)).ToArray());

        for (var i = 0; i < 100; ++i)
        {
            var freq = freqArr[i];
            while (freq-- > 0)
            {
                Console.Write($"{i} ");
            }
        }
    }
}
```