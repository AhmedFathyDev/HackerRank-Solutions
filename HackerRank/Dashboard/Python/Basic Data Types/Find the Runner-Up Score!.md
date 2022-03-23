
# Find the Runner-Up Score!
### [Back ⬅️](README.md)

## **Python 3** solution

```py
n = int(input())

A = list(map(int, input().split()))

maximum  = max(A)
secondMaximum = -100

for i in range(n):
    if A[i] != maximum and A[i] > secondMaximum:
        secondMaximum = A[i]

print(secondMaximum)
```