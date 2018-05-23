//
//  car1.cpp
//  CH 05
//
//  Created by 동균 on 2018. 5. 23..
//  Copyright © 2018년 동균. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Car{
public:
    
    int speed;
    int gear;
    string color;
    
    void speedUp(){
        speed += 10;
    }
    
    void speedDown() {
        speed -=10;
    }
    void show(){
        cout << "==========" << endl;
        cout << "속도: " <<speed << endl;
        cout << "기어: " <<gear << endl;
        cout << "색상: " <<color << endl;
        cout << "==========" << endl;
    }
};

int main() {
    Car myCar, yourCar;
    
    myCar.speed = 100;
    myCar.gear = 3;
    myCar.color = "red";
    
    yourCar.speed = 10;
    yourCar.gear = 1;
    yourCar.color = "blue";
    
    myCar.speedUp();
    yourCar.speedDown();
    
    myCar.show();
    yourCar.show();
    
    return 0;
}
