
# Nested Lists
### [Back ⬅️](README.md)

## **Python 3** solution

```py
records = {}

N = int(input())

for _ in range(N):
    name = input()
    grade = float(input())
    records[name] = grade

secondLowestScore = sorted(list(set(records.values())))[1]

secondLowestNames = []

for key, value in records.items():
    if value == secondLowestScore:
        secondLowestNames.append(key)

secondLowestNames.sort()

for name in secondLowestNames:
    print(name)
```