#!/bin/python3


def main():
    n = int(input())

    print(*[i**2 for i in range(n)], sep='\n')


if __name__ == '__main__':
    main()
