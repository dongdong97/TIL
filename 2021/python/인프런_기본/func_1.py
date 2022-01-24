# 언패킹 * 하나 붙어서 변수로 받을 경우
# 다양한 입력값을 받는다는 의미  튜플
def args(*args):
    for i, v in enumerate(args):
        print('결과 : {}'.format(i), v)
    print('-------')

args('Lee')
args('Lee', 'Park')

# ** 언패킹  딕셔너리
def kwargs_func(**kwargs):
    for v in kwargs.keys():
        print("{}".format(v), kwargs[v])
    print('-----')

kwargs_func(name1 = 'Lee')

kwargs_func(name1 = 'Lee', name2 = 'Park')

# 전체 혼합

def example(args_1, args_2, *args, **kwargs):
    print(args_1, args_2, args, kwargs)

example(10, 20, 'Lee', 'Kim', 'Cho', age1 = 20, age2 = 20, age3 = 30)


# 중첩함수
# 함수안에 함수

def nested_func(num):
    def func_in_func(num):
        print(num)
    print("in func")
    func_in_func(num + 100)

nested_func(100)

# 중첩함수 안에 선언된 함수는 바로 호출 불가
# func_in_func(1000)
# 처음 생성한 함수에서 생성되기때문에 바로 호출하면 정의되지 않았다는 에러 발생