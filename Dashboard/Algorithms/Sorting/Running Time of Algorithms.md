
# Running Time of Algorithms
### [Back ⬅️](README.md)

## **C#** solution

```cs
public class Solution
{
    private static int runningTime(List<int> arr)
    {
        var shifts = 0;

        for (var i = 1; i < arr.Count; ++i)
        {
            var arrI = arr[i];
            var j = i;

            for (; j > 0 && arrI < arr[j - 1]; --j)
            {
                arr[j] = arr[j - 1];
                ++shifts;
            }

            arr[j] = arrI;
        }

        return shifts;
    }

    public static void Main(string[] args)
    {
        Console.ReadLine();
        
        Console.WriteLine(runningTime(Console.ReadLine()!.Split(' ').ToList().Select(x => Convert.ToInt32(x)).ToList()));
    }
}
```