
# Counting Sort 2
### [Back ⬅️](README.md)

## **C#** solution

```cs
public class Solution
{
    private static List<int> countingSort(List<int> arr)
    {
        var freqArr = new List<int>(new int[100]);

        foreach (var i in arr)
        {
            ++freqArr[i];
        }

        return freqArr;
    }

    public static void Main(string[] args)
    {
        Console.ReadLine();
        
        var freqArr = countingSort(Console.ReadLine()!.Split(' ').ToList().Select(i => Convert.ToInt32(i)).ToList());

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