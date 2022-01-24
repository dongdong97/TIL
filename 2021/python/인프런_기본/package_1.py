#파이썬은 패키지로 분할 된 개별적인 모듈로 구성된다.
# 상대경로 : .. (부모 디렉토리(경로)) . (현재 디렉토리) ==> 모듈 내부에서만 사용

#import로 가져올때 같은 경로에서 파생된거면 그 이후부터 .을 붙이면서 선언가능
# import sub.sub1.module1 


# from sub.sub1 import module1       #처음 경로 from 으로 접근 후 import 진행 import 이후 접근한 이름만으로 실행 가능 
# from sub.sub2 import module2 as m2 #alias  

# module1.~~
# m2.~~


# from sub.sub1 import * # 해당 경로 내 모든 파일 사용

# __init__.py : 3.3부터는 없어도 패키지로 인식 -> 단 하위버전 호환을 위해 작성 추천
# 즉 빈 __init__.py 파일을 만들어 두어야 한다.
# init 내부에 __all__ = ['파일이름']  을 적으면 파일이름 적은것만 접근할 수 있다.
