//
//  main.cpp
//  CH 07
//
//  Created by 동균 on 2018. 6. 15..
//  Copyright © 2018년 동균. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Car{
    int speed;
    int gear;
    string color;
public:
    Car(int s = 0, int g = 1, string c = "white" ) : speed(s), gear(g), color(c){}
}
