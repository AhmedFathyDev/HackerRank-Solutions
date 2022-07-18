
# Fraudulent Activity Notifications
### [Back ⬅️](README.md)

## **C#** solution

```cs
namespace Challenge;

public static class Program
{
    private static int ActivityNotifications(IReadOnlyList<int> expenditure, int d)
    {
        var notifications = 0;
        var transactionDays = new Dictionary<int, int>();
        
        double GetMedian(int index)
        {
            var sum = 0;
            
            for (var i = 0; i < 201; ++i)
            {
                if (transactionDays.ContainsKey(i))
                {
                    sum += transactionDays[i];
                }
                
                if (sum >= index)
                {
                    return i;
                }
            }
            
            return 0.0;
        }

        for (var i = 0; i < d; ++i)
        {
            if (!transactionDays.ContainsKey(expenditure[i]))
            {
                transactionDays.Add(expenditure[i], 1);
            }
            else
            {
                transactionDays[expenditure[i]]++;
            }
        }

        for (var i = d; i < expenditure.Count; ++i)
        {
            var median = GetMedian(d / 2 + d % 2);

            if (d % 2 == 0)
            {
                median = (median + GetMedian(d / 2 + 1)) / 2.0;
            }
                
            if (expenditure[i] >= median * 2.0)
            {
                notifications++;
            }

            if (!transactionDays.ContainsKey(expenditure[i]))
            {
                transactionDays.Add(expenditure[i], 1);
            }
            else
            {
                transactionDays[expenditure[i]]++;
            }
            
            transactionDays[expenditure[i - d]]--;
        }

        return notifications;
    }
    
    public static void Main(string[] args)
    {
        var nAndD = Console.ReadLine()!.Split(' ').ToArray().Select(x => Convert.ToInt32(x)).ToArray();

        Console.WriteLine(ActivityNotifications(Console.ReadLine()!
            .Split(' ').ToArray().Select(x => Convert.ToInt32(x)).ToArray(), nAndD[1]));
    }
}
```