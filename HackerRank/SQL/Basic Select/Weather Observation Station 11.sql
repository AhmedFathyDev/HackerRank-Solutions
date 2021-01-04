SELECT DISTINCT CITY
FROM STATION
WHERE NOT LOWER(SUBSTR(CITY, LENGTH(CITY), 1)) in ('a', 'e', 'i', 'o', 'u')
    OR NOT LOWER(SUBSTR(CITY, 1, 1)) in ('a', 'e', 'i', 'o', 'u');