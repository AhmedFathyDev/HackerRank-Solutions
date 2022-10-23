
# Ice Cream Parlor
### [Back ⬅️](README.md)

## **C#** solution

```cs
namespace Challenge;

public static class Program
{
    private class Pair
    {
        public Pair(int? index1, int? index2)
        {
            Index1 = index1;
            Index2 = index2;
        }

        public int? Index1 { get; set; }
        public int? Index2 { get; set; }
    }
    
    public static void Main()
    {
        var t = Convert.ToInt32(Console.ReadLine()!.Trim());

        while (t-- > 0)
        {
            var m = Convert.ToInt32(Console.ReadLine()!.Trim());
            var n = Convert.ToInt32(Console.ReadLine()!.Trim());

            var costs = Console.ReadLine()!.Trim().Split().Select(input => Convert.ToInt32(input)).ToArray();

            var costsWithIndices = new Dictionary<int, Pair>();

            for (var i = 0; i < n; ++i)
            {
                if (costsWithIndices.TryGetValue(costs[i], out _))
                {
                    costsWithIndices[costs[i]].Index2 ??= i;
                    continue;
                }
                
                costsWithIndices.Add(costs[i], new Pair(i, null));
            }

            foreach (var cost in costsWithIndices)
                
            {
                if (!costsWithIndices.TryGetValue(m - cost.Key, out var pair)) continue;
                
                if (cost.Value.Index1 == pair.Index1 && pair.Index2 is null) continue;

                if (pair.Index2 is null)
                {
                    Console.WriteLine($"{cost.Value.Index1 + 1} {pair.Index1 + 1}");
                    break;
                }
                
                Console.WriteLine($"{pair.Index1 + 1} {pair.Index2 + 1}");
                break;
            }
        }
    }
}
```