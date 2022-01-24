
# 파이썬 클래스
# OOP(객체 지향 프로그래밍), self, 인스턴스 메소드, 인스턴스 변수

# class == 붕어빵틀
# 인스턴스 class 코드에서 사용하는 객체다 
class Dog: #object 상속
    specis = 'first_dog'  # 클래스변수 어디서든 같은 값 (객체 전부 같은 값)

# 1 class dog
# 2 class dog()
# 3 class dog(object) 세개 다 가능 

    # 초기화/ 인스턴스 속성
    def __init__(self, name, age):  #인스턴스 변수 선언할때마다 다른 값을 가진다. (객체마다 다른값)
        self.name = name
        self.age = age


# 클래스 정보  : 직접 접근 가능
print(Dog)

# 인스턴스화  코드로 직접 구현해서 메모리에 올라간 시점
a = Dog("뽀삐", 2)
b = Dog("김치", 3)

# 두 값 비교
print(a == b, id(a) , id(b))

# 네임스페이스 : 객체를 인스턴스화 할때 저장된 공간
# # 아이디가 각기 다르듯 공간 내 값도 다 다르다 딕셔너리 형태
print('dog1', a.__dict__)
print('dog2', b.__dict__)


# 인스턴스 속성 확인
print('{} is {} and {} is {}'.format(a.name, a.age, b.name, b.age))
print('{} is {}'.format(a.specis, b.specis))

if a.specis == 'first_dog':
    print('{0} 는 {1}쌀'.format(a.name, a.age))


# self 의 이해
class SelfTest:
    def func1():   # 클래스 매소드
        print("Func1 called")
    def func2(self):  # 인스턴스 메소드
        print("Func2 called")


f = SelfTest()

print(id(f))
#f.func1() 에러발생
f.func2()

# f 와 func2의 self 의 id 값이 같다
# 즉 self 가 f의 id 를 가져가는 것(선언한 인스턴스의 id 를 가져가는것)

SelfTest.func1() # 선언한 값이 필요 없기에 사용가능
#SelfTest.func2() 에러발생 # 해결방법 () 에 선언한 인스턴스 호출

SelfTest.func2(f)

# 클래스 변수, 인스턴스 변수

class Warehouse:
    # 클래스 변수
    stock_num = 0

    def __init__(self, name):
        #인스턴스 변수
        self.name = name
        Warehouse.stock_num += 1

    def __del__(self):
        Warehouse.stock_num -= 1

print(Warehouse.stock_num)
user1 = Warehouse('김씨')
print(Warehouse.stock_num)
user2 = Warehouse('박씨')
print(Warehouse.stock_num)

print(user1.name)
print(user2.name)
print(user1.__dict__)
print(user2.__dict__)
print(Warehouse.__dict__)





class Dog2: #object 상속
    specis = 'first_dog'  # 클래스변수 어디서든 같은 값 (객체 전부 같은 값)

# 1 class dog
# 2 class dog()
# 3 class dog(object) 세개 다 가능 

    # 초기화/ 인스턴스 속성
    def __init__(self, name, age):  #인스턴스 변수 선언할때마다 다른 값을 가진다. (객체마다 다른값)
        self.name = name
        self.age = age

    def info(self):
        return '{} 은 {} 살이에용'.format(self.name, self.age)
    
    def speak(self, sound):
        return '{}은 말한당 {} 라고 '.format(self.name, sound)


#인스턴스 생성
c = Dog2('티모', 4)
d = Dog2('딩동', 100)
#메소드 호출
print(c.info())
print(c.speak('콩콩콩'))

