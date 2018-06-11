////
////  car5.cpp
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
//    char *color;
//public:
//    // 생성자
//    Car(int s,int g, char *c){
//        cout << " 생성자 호출 " << endl;
//        speed = s;
//        gear = g;
//        color = new char[strlen(c)+1];
//        strcpy(color, c);
//    }
//    // 소멸자
//    ~Car() {
//        cout << " 소멸자 호출 " << endl;
//        delete [] color;
//    }
//};
//
//int main() {
//    Car c(0,1,"yellow");
//    return 0;
//    
//}
