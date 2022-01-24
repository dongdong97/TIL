#파일 읽기 및 쓰기

#읽기모드 : r,  쓰기모드:w, 추가모드 a, 텍스트모드 t, 바이너리 모드 b


# 파일 읽기

f = open('./인프런_기본/resource/contents1.txt', 'r', encoding='UTF-8')

# print(dir(f))

# cts = f.read()
# print(cts)

f.close()

#예제2

with open('./인프런_기본/resource/contents1.txt', 'r', encoding='UTF-8') as f:
    c = f.read()
    print(c)
    print(iter(c))
    print(list(c))
#나가게 되면 자동으로 close 가 된다.

print()


#예제3
#read() : 전체 읽기 , read(10) : 10Byte 읽기
with open('./인프런_기본/resource/contents1.txt', 'r', encoding='UTF-8') as f:
    c = f.read(5)
    print(c)
    c = f.read(5)
    print(c)
