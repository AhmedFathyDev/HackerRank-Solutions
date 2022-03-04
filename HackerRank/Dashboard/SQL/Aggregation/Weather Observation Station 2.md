
# Weather Observation Station 2
### [Back ⬅️](README.md)

## **MS SQL Server** solution

```sql
SELECT FORMAT(Round(Sum(LAT_N), 2), '#.00'), FORMAT(Round(Sum(LONG_W), 2), '#.00')
FROM STATION;
```
