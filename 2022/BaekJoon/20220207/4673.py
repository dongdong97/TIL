def d(n):
    number = int(n)
    for i in list(str(n)):
        number += int(i)
    return number

non_self_number = []
for i in range(1,10001):
    num = d(i)
    non_self_number.append(num)

for j in range(1,10001):
    if j in non_self_number:
        pass
    else:
        print(j)


