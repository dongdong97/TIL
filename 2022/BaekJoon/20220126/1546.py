

a = int(input())

b = list(map(int,input().split()))
max_b = max(b)

for i in range(a):
    b[i] = b[i]/max_b * 100

print("%.2f" %(sum(b)/ a))