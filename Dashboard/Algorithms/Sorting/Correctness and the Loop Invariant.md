
# Correctness and the Loop Invariant
### [Back ⬅️](README.md)

## **C#** solution

```cs
public class Solution
{
    private static bool isSorted(int[] pArray, int pIndex)
    {
        if (pIndex == 0)
        {
            return true;
        }

        bool sorted = true;

        for (int i = 0; i < pIndex && sorted; i++)
        {
            if (pArray[i] > pArray[i + 1])
            {
                sorted = false;
            }
        }

        return sorted;
    }
    
    public static void InsertionSort(int[] A)
    {
        for (var i = 1; i < A.Length; ++i)
        {
            var arrI = A[i];
            var j = i;

            for (; j > 0 && arrI < A[j - 1]; --j)
            {
                A[j] = A[j - 1];
            }

            A[j] = arrI;

            if (!Solution.isSorted(A, j))
            {
                Console.WriteLine($"Sort Failed at index: {i - 1} string: '{string.Join(", ", A.Select(v => v.ToString()))}'");
            }
        }

        Console.WriteLine(string.Join(" ", A));
    }

    public static void Main(string[] args)
    {
        Console.ReadLine();

        int[] arr = (from s in Console.ReadLine()?.Split() select Convert.ToInt32(s)).ToArray();
        
        InsertionSort(arr);
    }
}
```