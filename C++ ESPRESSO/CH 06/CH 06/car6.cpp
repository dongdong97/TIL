////
////  car6.cpp
////  CH 06
////
////  Created by 동균 on 2018. 6. 10..
////  Copyright © 2018년 동균. All rights reserved.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Car{
//    int speed;
//    int gear;
//    string color;
//    
//public:
//    Car(int s, int g, string c) : speed(s), gear(g),color(c)
//    {
//        cout << " 생성자 호출 " << endl;
//    }
//    Car(const Car &obj) : speed(obj.speed), gear(obj.gear), color(obj.color)
//    {
//        cout << "복사 생성자 호출" << endl;
//    }
//    void print(){
//        cout << " ===================" << endl;
//        cout << " 속도 : " << speed << endl;
//        cout << " 기어 : " << gear << endl;
//        cout << " 색상 : " << color << endl;
//        cout << " ===================" << endl;
//    }
//};
//int main(){
//    Car c1(0,1,"yellow");
//    Car c2(c1);
//    
//    c1.print();
//    c2.print();
//    return 0;
//    
//}
