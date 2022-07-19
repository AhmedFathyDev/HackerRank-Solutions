
# Lily's Homework
### [Back ⬅️](README.md)

## **C#** solution

```cs
namespace Challenge;

public static class Program
{
    private static int LilysHomework(int[] arr)
    {
        int NumberOfSwaps(int[] array)
        {
            var arrayIndices = new Dictionary<int, int>();

            for (var i = 0; i < array.Length; ++i)
            {
                arrayIndices.Add(array[i], i);
            }
            
            var swaps = 0;
            var sortedArray = new int[array.Length];

            array.CopyTo(sortedArray, 0);
            Array.Sort(sortedArray);
            
            for (var i = 0; i < array.Length; ++i)
            {
                if (array[i] == sortedArray[i]) continue;
                
                var swapIndex = arrayIndices[sortedArray[i]];
                arrayIndices[array[i]] = swapIndex;
                (array[i], array[swapIndex]) = (array[swapIndex], array[i]);
                
                swaps++;
            }
            
            return swaps;
        }
        
        var reverseArr = new int[arr.Length];
        arr.CopyTo(reverseArr, 0);
        Array.Reverse(reverseArr);

        return Math.Min(NumberOfSwaps(arr), NumberOfSwaps(reverseArr));
    }
    
    public static void Main(string[] args)
    {
        Console.ReadLine();

        Console.WriteLine(LilysHomework(Console.ReadLine()!
            .Split(' ').ToArray().Select(x => Convert.ToInt32(x)).ToArray()));
    }
}
```