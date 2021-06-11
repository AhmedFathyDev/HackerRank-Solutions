#!/bin/python3

n = int(input())

print(*[i**2 for i in range(n)], sep='\n')
