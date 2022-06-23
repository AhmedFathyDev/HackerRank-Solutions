
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
        
        Console.WriteLine(runningTime(Console.ReadLine()!.Split(' ').ToList().Select(x => Convert.ToInt32(x)).ToList()));
    }
}
```