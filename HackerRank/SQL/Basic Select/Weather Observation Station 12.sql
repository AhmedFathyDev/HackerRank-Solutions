SELECT DISTINCT CITY
FROM STATION
WHERE NOT LOWER(SUBSTR(CITY, LENGTH(CITY), 1)) in ('a', 'e', 'i', 'o', 'u')
    AND NOT LOWER(SUBSTR(CITY, 1, 1)) in ('a', 'e', 'i', 'o', 'u');