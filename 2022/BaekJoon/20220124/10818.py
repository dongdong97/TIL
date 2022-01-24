# 최대 최소 구하기 
# sort 사용하면 될 거 같다.

cnt = int(input())
array = list(map(int,input().split()))
#map(1,2)--> 1번 형태로 2번 리스트를 저장한다.?
#split() --> split() 괄호안에 값을 기준으로 분리한다.

array.sort()
print(array[0], array[cnt -1])

