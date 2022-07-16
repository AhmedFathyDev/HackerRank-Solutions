
# Closest Numbers
### [Back ⬅️](README.md)

## **C#** solution

```cs
namespace Challenge;

public static class Program
{
    private static IEnumerable<int> ClosestNumbers(int[] arr)
    {
        Array.Sort(arr);

        var ans = new List<int>();
        var minDiff = int.MaxValue;

        for (var i = 0; i < arr.Length - 1; ++i)
        {
            minDiff = Math.Min(Math.Abs(arr[i] - arr[i + 1]), minDiff);
        }
        
        for (var i = 0; i < arr.Length - 1; ++i)
        {
            if (minDiff != Math.Abs(arr[i] - arr[i + 1])) continue;
            
            ans.Add(arr[i]);
            ans.Add(arr[i + 1]);
        }
        
        return ans;
    }

    public static void Main(string[] args)
    {
        Console.ReadLine();

        Console.WriteLine(string.Join(" ",
            ClosestNumbers(
                Console.ReadLine()!.Split(' ').ToArray().Select(i => Convert.ToInt32(i)).ToArray())));
    }
}
```