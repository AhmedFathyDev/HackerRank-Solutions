
# sWAP cASE
### [Back ⬅️](README.md)

## **Python 3** solution

```py
def swap_case(s):
    return "".join([ch.lower() if ch.isupper() else ch.upper() for ch in s])

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
```
