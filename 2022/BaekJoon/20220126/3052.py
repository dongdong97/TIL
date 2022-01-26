
a = []

for i in range(10):
    a.append(int(input()))
    a[i] = a[i] % 42

s = set(a)
print(len(s))