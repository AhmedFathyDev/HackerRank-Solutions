
# Gridland Metro
### [Back ⬅️](README.md)

## **C#** solution

```cs
namespace Challenge;

public static class Program
{
    public static void Main()
    {
        var firstLine = Console.ReadLine()!.Trim().Split().Select(input => Convert.ToInt32(input)).ToArray();

        long n = firstLine[0];
        var m = firstLine[1];
        var k = firstLine[2];

        var lampposts = n * m;
        var tracks = new Dictionary<int, int[]>();

        while (k-- > 0)
        {
            var line = Console.ReadLine()!.Trim().Split().Select(input => Convert.ToInt32(input)).ToArray();

            var r = line[0] - 1;
            var c1 = line[1] - 1;
            var c2 = line[2] - 1;

            if (!tracks.ContainsKey(r))
            {
                tracks.Add(r, new[] { c1, c2 });
            }
            else if (c1 > tracks[r][1])
            {
                lampposts -= c2 - c1 + 1;
            }
            else if (c2 > tracks[r][1])
            {
                tracks[r][1] = c2;
            }
        }

        Console.WriteLine(tracks.Aggregate(lampposts,
            (current, track) => current - (track.Value[1] - track.Value[0] + 1)));
    }
}
```