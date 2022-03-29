
# String Split and Join
### [Back ⬅️](README.md)

## **Python 3** solution

```py
def split_and_join(line):
    return line.replace(" ", "-")

if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)
```
