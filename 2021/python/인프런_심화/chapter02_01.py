#chapter 02-01
#객체 지향 프로그래밍(oop) -> 코드의 재사용, 코드 중복 방지 등 
# 규모가 큰 프로젝트(프로그램) 과거에는 함수 중심 -> 데이터가 방대해져 복잡해짐
# 클래스 중심 -> 데이터 중심 -> 객체로 관리

#일반적인 코딩

#차량1
car_company_1 = 'Ferrai'
car_detail_1 = [
    {'color' : "white"},
    {'horsepower' : 400},
    {'price' : 8000}
]
#차량2
car_company_2 = 'BMW'
car_detail_2 = [
    {'color' : "black"},
    {'horsepower' : 200},
    {'price' : 6000}
]

#차량3
car_company_3 = 'Audi'
car_detail_3 = [
    {'color' : "white"},
    {'horsepower' : 320},
    {'price' : 9800}
]
#차량이 늘어날 수록 변수, 코드 증가 부분이 많음
# 수정 시 변경할 내용 많음


# 리스트 구조
# 관리 어려움
# 인덱스로 접근, 인덱스 삭제 및 수정 어려움

car_company_list = ['Ferrai','BMW','Audi']
car_detail_list = [
    {'color' : "white",'horsepower' : 400,'price' : 8000},
    {'color' : "black",'horsepower' : 200,'price' : 6000},
    {'color' : "white",'horsepower' : 320,'price' : 9800}
]


# 딕셔너리 구조
# 코드 반복 지속, 중첩 문제(키), 키 조회 예외 처리 필요

car_dicts = [
    {'car_company': 'Ferrai', 'car_detail' : {'color' : "white",'horsepower' : 400,'price' : 8000} },
    {'car_company': 'BMW', 'car_detail' : {'color' : "black",'horsepower' : 200,'price' : 6000} },
    {'car_company': 'Audi', 'car_detail' : {'color' : "white",'horsepower' : 320,'price' : 9800} },
]


# 클래스 구조 
# 구조 설계 후 재사용성 증가, 코드 반복 최소화

class Car():
    def __init__(self, company, details):
        self._company = company
        self._details = details

    def __str__(self):  # 문자열로 표현
        return 'str : {} - {}'.format(self._company, self._details)

    def __repr__(self): # 객체정보까지 문자열로 표현
        return 'repr : {} - {}'.format(self._company, self._details)

car1 = Car('Ferrai', {'color' : "white",'horsepower' : 400,'price' : 8000})
car2 = Car('BMW', {'color' : "black",'horsepower' : 200,'price' : 6000})
car3 = Car('Audi', {'color' : "white",'horsepower' : 320,'price' : 9800})

print(car1.__dict__) #딕셔너리 형태로 표현


# 리스트 선언

car_list = []

car_list.append(car1)
car_list.append(car2)
car_list.append(car3)


print(car_list)

# 반복문에서는 str , 명시적으로는 repr
for x in car_list:
    print(repr(x))
    print(x)