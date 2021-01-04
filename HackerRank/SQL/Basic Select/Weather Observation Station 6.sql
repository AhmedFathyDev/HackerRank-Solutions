SELECT CITY
FROM STATION
WHERE LOWER(SUBSTR(CITY, 1, 1)) in ('a', 'e', 'i', 'o', 'u');