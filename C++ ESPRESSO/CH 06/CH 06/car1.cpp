////
////  main.cpp
////  CH 06
////
////  Created by 동균 on 2018. 6. 10..
////  Copyright © 2018년 동균. All rights reserved.
////
//// 생성자와 소멸자
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Car{
//private:
//    int speed;
//    int gear;
//    string color;
//public:
//    Car()   // 생성자
//    {
//        cout <<"디폴트 생성자 호출" << endl;
//        speed = 0;
//        gear = 1;
//        color = "red";
//    }
//};
//
//int main(int argc, const char * argv[]) {
//    Car c1;   // 객체 생성시 자동 호출
//    return 0;
//}
//
//
//// 만약 생성자를 클래스 외부에 정의하려면?
//// 아래처럼 코드앞에 클래스이름:: 을 붙여서 만든다.
////Car::Car(){
////    cout <<"디폴트 생성자 호출" << endl;
////    speed = 0;
////    gear = 1;
////    color = "red";
////}
