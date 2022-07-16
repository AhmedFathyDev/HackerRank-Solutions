
# The Full Counting Sort
### [Back ⬅️](README.md)

## **C#** solution

```cs
namespace Challenge;

public static class Program
{
    public static void Main(string[] args)
    {
        int.TryParse(Console.ReadLine()!.Trim(), out var n);

        var arr = new string[n];

        for (var i = 0; i < n / 2; ++i)
        {
            var line = Console.ReadLine()!.Trim().Split(' ');

            int.TryParse(line[0], out var x);
            var s = line[1];

            arr[x] = arr[x] + "-" + " ";
        }

        for (var i = 0; i < n / 2; ++i)
        {
            var line = Console.ReadLine()!.Trim().Split(' ');

            int.TryParse(line[0], out var x);
            var s = line[1];

            arr[x] = arr[x] + s + " ";
        }

        for (var i = 0; i < n; ++i)
        {
            Console.Write(arr[i]);
        }
    }
}
```