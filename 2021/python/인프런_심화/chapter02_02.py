#chapter 02-02
#객체 지향 프로그래밍(oop) -> 코드의 재사용, 코드 중복 방지 등 
# 규모가 큰 프로젝트(프로그램) 과거에는 함수 중심 -> 데이터가 방대해져 복잡해짐
# 클래스 중심 -> 데이터 중심 -> 객체로 관리

# 클래스 구조 
# 구조 설계 후 재사용성 증가, 코드 반복 최소화

class Car():
    """
    Car class
    Auther : Hwang
    Date : 2021.10.07
    """
    # 클래스 변수 모든 인스턴스가 공유
    car_count = 0


    def __init__(self, company, details):
        self._company = company
        self._details = details
        self.car_count = 10
        Car.car_count += 1

    def __str__(self):  # 문자열로 표현
        return 'str : {} - {}'.format(self._company, self._details)

    def __repr__(self): # 객체정보까지 문자열로 표현
        return 'repr : {} - {}'.format(self._company, self._details)

    def __del__(self):
        Car.car_count -= 1

    def detail_info(self):
        print('Current ID : {}'.format(id(self)))
        print('CAR Detail Info : {} {}'.format(self._company, self._details.get('price')))


# self 의미
# 인스턴스 메소드에서는 self가 맨처음 넘어오게 되어 있다.
car1 = Car('Ferrai', {'color' : "white",'horsepower' : 400,'price' : 8000})
car2 = Car('BMW', {'color' : "black",'horsepower' : 200,'price' : 6000})
car3 = Car('Audi', {'color' : "white",'horsepower' : 320,'price' : 9800})


# ID 확인
print(id(car1))
print(id(car2))
print(id(car3))


print(car1._company == car2._company) # 값을 비교
print(car1 is car2) # ID를 비교


# dir & __dict__ 확인
# dir은 해당 인스턴스가 가지고 있는 모든 에트리뷰트를 리스트 형태로 표현
print(dir(car1))
print(dir(car2))

# 내 네임스페이스만 확인하고 싶을때 dict
print(car1.__dict__)
print(car2.__dict__)

# Doctring
print(Car.__doc__)

# 실행
car1.detail_info()

# 비교

print(car1.__class__, car2.__class__)


#클래스는 하나라서  해당 부모 클래스 id 호출이라 같은 값이 나온다.
print(id(car1.__class__), id(car2.__class__))

#에러
#Car.detail_info()
Car.detail_info(car1)
car1.detail_info()



# 접근
print(Car.car_count)
print(car1.car_count)

#삭제 확인
del car2

print(Car.car_count)
print(car1.car_count)

#인스턴스 네임스페이스에 없으면 상위에서 자동으로 검색
# 동일한 이름으로 변수 생성 가능( 인스턴스 검색 후 -> 상위(부모 클래스 검색))