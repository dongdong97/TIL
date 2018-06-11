//
//  student.cpp
//  CH 06
//
//  Created by 동균 on 2018. 6. 10..
//  Copyright © 2018년 동균. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Student{
    char *name;
    int number;
public:
    Student(char *p,int n){
        cout << "메모리 할당" <<endl;
        name = new char[strlen(p)+1];
        strcpy(name, p);
        number = n;
    }
    ~Student() {
        cout << "메모리 소멸 " << endl;
        delete [] name;
    }
};

int main() {
    Student s1("Park", 20100001);
    Student s2(s1); //복사 생성자 호출
    return 0;
}
