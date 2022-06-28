
# The Full Counting Sort
### [Back ⬅️](README.md)

## **C#** solution

```cs
class Solution
{
    public static void Main(string[] args)
    {
        int.TryParse(Console.ReadLine()!.Trim(), out int n);

        var arr = new string[n];

        for (int i = 0; i < n / 2; ++i)
        {
            string[] line = Console.ReadLine()!.Trim().Split(' ');

            int.TryParse(line[0], out int x);
            string s = line[1];

            arr[x] = arr[x] + "-" + " ";
        }

        for (int i = 0; i < n / 2; ++i)
        {
            string[] line = Console.ReadLine()!.Trim().Split(' ');

            int.TryParse(line[0], out int x);
            string s = line[1];

            arr[x] = arr[x] + s + " ";
        }

        for (int i = 0; i < n; ++i)
        {
            Console.Write(arr[i]);
        }
    }
}
```