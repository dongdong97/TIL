#파이썬 모듈
# 함수, 변수, 클래스 등 파이썬 구성 요소등을 모아놓은 파일
# import를 통해 호출해서 사용할 수 있다.
# 모듈을 모아 폴더로 만들면 패키지가 된다.


def add(x,y):
    return x+y

def subtract(x,y):
    return x-y

def multiply(x,y):
    return x * y

def divide(x,y):
    return x/y

def power(x,y):
    return x ** y


# print('-' * 15)

# print('내부선언')
# print(add(5,5))
# print(subtract(15,5))
# print(multiply(5,5))
# print(divide(10,5))
# print(power(5,2))

# print('-' * 15)

# 해당 파일을 메인으로 실행할 경우만 아래 소스가 실행된다.
if __name__ == '__main__':
     print('-' * 15)
     print('내부선언')
     print(add(5,5))
     print(subtract(15,5))
     print(multiply(5,5))
     print(divide(10,5))
     print(power(5,2))

     print('-' * 15)