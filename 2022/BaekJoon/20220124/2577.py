a = int(input())
b = int(input())
c = int(input())

d = list(str(a * b * c))


for i in range(10):
    print(d.count(str(i)))

#d 에 대해 string형태로 잡힘
# 그것에 대해 0~9까지 숫자를 카운트 하게 함