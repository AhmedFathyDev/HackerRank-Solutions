
# Hackerland Radio Transmitters
### [Back ⬅️](README.md)

## **C#** solution

```cs
namespace Challenge;

public static class Program
{
    public static void Main()
    {
        var firstLine = Console.ReadLine()!.Trim().Split().Select(input => Convert.ToInt32(input)).ToArray();

        var n = firstLine[0];
        var k = firstLine[1];

        var x = Console.ReadLine()!.Trim().Split().Select(input => Convert.ToInt32(input)).ToArray();

        Array.Sort(x);

        var i = 0;
        var transmitters = 0;

        while (i < n)
        {
            var bestLocation = x[i] + k;

            while (i < n && x[i] <= bestLocation)
            {
                ++i;
            }

            --i;
            ++transmitters;

            bestLocation = x[i] + k;

            while (i < n && x[i] <= bestLocation)
            {
                ++i;
            }
        }

        Console.WriteLine(transmitters);
    }
}
```