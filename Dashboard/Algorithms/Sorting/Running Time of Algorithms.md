
# Running Time of Algorithms
### [Back ⬅️](README.md)

## **C#** solution

```cs
namespace Challenge;

public static class Program
{
    private static int RunningTime(IList<int> arr)
    {
        var shifts = 0;

        for (var i = 1; i < arr.Count; ++i)
        {
            var key = arr[i];
            var j = i - 1;

            while (j >= 0 && key < arr[j])
            {
                arr[j + 1] = arr[j];
                ++shifts;
                --j;
            }

            arr[j + 1] = key;
        }

        return shifts;
    }

    public static void Main(string[] args)
    {
        Console.ReadLine();
        
        Console.WriteLine(RunningTime(Console.ReadLine()!.Split(' ').ToArray().Select(x => Convert.ToInt32(x)).ToArray()));
    }
}
```