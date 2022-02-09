
from itertools import count


ans = "abcdefghijklmnopqrstuvwxyz"

s = input()

for i in ans:
    if i in s:
        print(s.index(i), end=' ')
    else:
        print( -1, end=' ')