a = int(input())

for i in range(a):
    b = list(map(int, input().split()))

    avg = sum(b[1:]) / b[0]
    cnt = 0
    #print("%.3f" %(sum / b[0]) + '%')       
    for j in b[1:]:
        if j > avg:
            cnt += 1
    
    print("%.3f" %(cnt / b[0] * 100) , '%')

