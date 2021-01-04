SELECT DISTINCT CITY
FROM STATION
WHERE LOWER(SUBSTR(CITY, LENGTH(CITY), 1)) in ('a', 'e', 'i', 'o', 'u')
    AND LOWER(SUBSTR(CITY, 1, 1)) in ('a', 'e', 'i', 'o', 'u');