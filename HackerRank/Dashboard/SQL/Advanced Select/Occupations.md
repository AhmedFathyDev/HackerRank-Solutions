
# Occupations
### [Back ⬅️](README.md)

## **MySQL** solution

```sql
SET @`IDX_Doctor`=0;
SET @`IDX_Professor`=0;
SET @`IDX_Singer`=0;
SET @`IDX_Actor`=0;

SELECT MIN(`Doctor`), MIN(`Professor`), MIN(`Singer`), MIN(`Actor`)
FROM(
    SELECT
        CASE
            WHEN `Occupation`='Doctor'
                THEN (@`IDX_Doctor`:=@`IDX_Doctor`+1)
            WHEN `Occupation`='Professor'
                THEN (@`IDX_Professor`:=@`IDX_Professor`+1)
            WHEN `Occupation`='Singer'
                THEN (@`IDX_Singer`:=@`IDX_Singer`+1)
            WHEN `Occupation`='Actor'
                THEN (@`IDX_Actor`:=@`IDX_Actor`+1)
        END AS `RowNumber`,
        CASE
            WHEN `Occupation`='Doctor'
                THEN Name
        END AS `Doctor`,
        CASE
            WHEN `Occupation`='Professor'
                THEN Name
        END AS `Professor`,
        CASE
            WHEN `Occupation`='Singer'
                THEN Name
        END AS `Singer`,
        CASE
            WHEN `Occupation`='Actor'
                THEN Name
        END AS `Actor`
    FROM `OCCUPATIONS`
    ORDER BY Name
) `Temp`
GROUP BY `RowNumber`;
```