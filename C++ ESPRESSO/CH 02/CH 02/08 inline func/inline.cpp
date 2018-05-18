////
////  inline.cpp
////  CH 02
////
////  Created by 황동주 on 2018. 5. 14..
////  Copyright © 2018년 dong.gyun. All rights reserved.
////
//
//
//// 함수 이름앞에 inline이 있으면 컴파일러는 함수를 생성하지 않고 함수의 코드를 호출하는 곳에 직접 집어넣는다.
//// 이렇게하면 함수 호출 오버헤드가 사라지므로 프로그램을 더 빠르게 실행할 수 있다.
//
//#include <iostream>
//using namespace std;
//
////실수값 제공하는 함수
//inline double square(double i)
//{
//    return i*i;
//}
//
//int main() {
//    cout << "2.0의 제곱은 " << square(2.0) << endl;
//    cout << "3.0의 제곱은 " << square(3.0) << endl;
//    return 0;
//}
//
//
//// 매크로와 차이점
//// 매크로는 기계적인 대치라서 잘못 사용될 수가 있다.
// /*
//#define SQUARE(x) (x*x)
//SQUARE(y++)
// */
////y++ 때문에 y값이 2번 증가된다.
//
//// 함수 매크로는 인수 타임의 상관없이 동작한다. 일나인 함수는 정해진 타입의 인수만 받을 수 있다.
//// 인라인 함수도 중복이 가능하다 하지만 이 경우에는 템플릿을 사용하는 것이 더 바람직 하다.

