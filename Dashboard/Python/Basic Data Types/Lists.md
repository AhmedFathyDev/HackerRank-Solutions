
# Lists
### [Back ⬅️](README.md)

## **Python 3** solution

```py
n = int(input())

integersList = []

for _ in range(n):
    operation, *numbers = input().split()
    if operation == "print":
        print(integersList)
    else:
        getattr(integersList, operation)(*list(map(int, numbers)))
```
