////
////  ref.cpp
////  CH 03
////
////  Created by 동균 on 2018. 5. 20..
////  Copyright © 2018년 동균. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//
//int main(){
//    int var;
//    int &ref = var; //참조사 선언
//    
//    var = 10;
//    cout << "var의 값: " << var << endl;
//    cout << "ref의 값: " << ref << endl;
//    
//    ref = 20;       //ref의 값을 변경하면 var 의 값도 변경된다.
//    cout << "var의 값: " << var << endl;
//    cout << "ref의 값: " << ref << endl;
//    
//    return 0;
//}
//
///*
//참조자와 포인터의 차이점
//참조자는 반드시 선언과 동시에 초기화 되어야 한다.
// 포인터는 변수이다. 포인터가 가리키는 대상은 변경될 수 있다.
// 하지만 참조자는 자신만의 메모리 공간이 할당되지 않아 대상이 변경될 수 없다.
//참조자를 상수로 초기화 하면 오류!
// */
//
//
///*
// 참조자의 용도
//
//참조자는 상수 포인터와 가장 유사. 주로 함수 호출시에 매개변수와 반환값으로 사용
// 참조자가 함수의 매개 변수로 사용되면 참조자를 이용하여 함수 외부에 존재하는 변수의 값을 변경할 수 있다.
// 포인터도 가능하지만 참조자가 훨씬 더 사용하기 쉽다.
// 
// 함수가 참조자를 반환할 때는 지역변수의 참조자를 반환하게되면 함수가 종료되면서 없어지기에 조심!
//*/
