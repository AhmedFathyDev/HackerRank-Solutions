SELECT DISTINCT CITY
FROM STATION
WHERE CITY NOT LIKE '[a, e, i, o, u]%' OR CITY NOT LIKE '%[a, e, i, o, u]';