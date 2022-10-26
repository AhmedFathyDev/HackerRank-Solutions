
# Missing Numbers
### [Back ⬅️](README.md)

## **C#** solution

```cs
namespace Challenge;

public static class Program
{
    public static void Main()
    {
        Console.ReadLine();
        var arr = Console.ReadLine()!.Trim().Split().Select(input => Convert.ToInt32(input)).ToArray();
        
        Console.ReadLine();
        var brr = Console.ReadLine()!.Trim().Split().Select(input => Convert.ToInt32(input)).ToArray();

        var frequencyArr = new int[10001];
        var frequencyBrr = new int[10001];
        
        foreach (var i in arr)
        {
            frequencyArr[i]++;
        }

        foreach (var i in brr)
        {
            frequencyBrr[i]++;
        }

        var missingNumbers = new List<int>();

        for (var i = 0; i < 10001; ++i)
        {
            if (frequencyBrr[i] - frequencyArr[i] > 0)
            {
                missingNumbers.Add(i);
            }
        }
        
        Console.WriteLine(string.Join(' ', missingNumbers));
    }
}
```