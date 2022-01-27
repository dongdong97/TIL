a = int(input())

for i in range(a):
    b = input()

    sum = 0
    c = 1
    for j in b:
        if j == 'O':
            sum += c
            c += 1
        else:
            c = 1   
    print(sum)