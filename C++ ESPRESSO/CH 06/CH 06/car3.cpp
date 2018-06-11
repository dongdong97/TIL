////
////  car3.cpp
////  CH 06
////
////  Created by 동균 on 2018. 6. 10..
////  Copyright © 2018년 동균. All rights reserved.
////
//
//// 생성자 중복
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
//    Car();
//    Car(int s, int g, string c);
//};
//
//Car::Car()
//{
//    cout << "디폴트 생성자 호출" << endl;
//    speed =0;
//    gear =1;
//    color = "white";
//    
//}
//Car::Car(int s, int g, string c)
//{
//    cout << "매개 변수가 있는 생성자 호출" << endl;
//    speed = s;
//    gear = g;
//    color = c;
//}
//
//int main() {
//    Car c1;                // 디폴트 생성자 호출
//    Car c2(100,0,"blue");  // 매개 변수가 있는 생성자 호출
//    return 0;
//}
