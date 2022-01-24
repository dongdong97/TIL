#파이썬 예외처리의 이해
# 예외 종류
# syntaxError, TypeError, NameError, IndexError, ValueError, KeyError....

# 문법적으로는 예외가 없지만, 코드 실행 단계에서 발생하는 예외 중요..

# 예외는 반드시 처리해야 한다.
# 로그는 반드시 남겨서 확인할 수 있어야 한다.
# 예외는 던져진다.
# 예외 무시


#   SyntaxError : 문법 오류
# print('error)
# print('3'))


#   NameError : 참조 없음
# a = 10
# b = 20
# print(c)

#   ZeroDivisionError
# print( 100 / 0 )

#   IndexError

# x = [10,20,30,40]
# print(x[30])

#   KeyError

#dic = {'name': 'Lee', 'Age':20}

#print(dic['home'])
#print(dic.get('home'))  # get 을 이용해 없을경우 None 를 리턴

#    AttributeError : 모듈, 클래스에 있는 잘못된 속성 사용 예외
# import time
# print(time.time8())


#   ValueError 참조값이 없을 때

# x = [10,40,50]
# x.remove(2999)

#    FileNotFoundError 파일을 찾을 수 없을때

# f = open('text.txt')

#   TypeError : 자료형에 맞지 않는 연산을 수행 할 경우
# x = [1,2]
# y = (1,2)
# z = 'test'

# print(x+y)
# print(y+z)
# print(x+z)


# 예외처리 기본
# try: 에러가 발생 할 가능성이 있는 코드 실행
# except 에러명1 : 여러개 가능
# except 에러명2 :
#### except Exception:  인경우 모든 예외인 경우 잡아냄
# else : try 에 에러가 없는경우 실행
# finally : 항상 마지막에 실행  try except else finally~


# raise  예외를 직접 발생