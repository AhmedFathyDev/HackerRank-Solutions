
# Finding the percentage
### [Back ⬅️](README.md)

## **Python 3** solution

```py
n = int(input())

students = {}

for _ in range(n):
    name, *scores = input().split()
    students[name] = list(map(float, scores))

query_name = input()

print('{0:.2f}'.format(sum(students[query_name]) / len(students[query_name])))
```
