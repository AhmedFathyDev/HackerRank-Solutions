
# The PADS
### [Back ⬅️](README.md)

## **MS SQL** solution

```sql
SELECT CONCAT(Name, '(', Substring(Occupation, 1, 1), ')') AS Name
FROM OCCUPATIONS
ORDER BY Name;

SELECT CONCAT('There are a total of ', COUNT(Occupation), ' ', LOWER(Occupation), 's.') AS Total
FROM OCCUPATIONS
GROUP BY Occupation
ORDER BY Total;
```