////
////  swap2.cpp
////  CH 03
////
////  Created by 동균 on 2018. 5. 20..
////  Copyright © 2018년 동균. All rights reserved.
////
//    //참조에 의한 호출 - 포인터 
//#include <iostream>
//using namespace std;
//
//void swap(int *px, int *py);
//
//int main() {
//    
//    int a = 100, b = 200;
//    cout <<"swap() 호출 전 : a = " << a << ". b = " << b << endl;
//    swap(&a, &b);
//    cout <<"swap() 호출 후 : a = " << a << ". b = " << b << endl;
//    return 0;
//}
//
//
//void swap(int *px, int *py){
//    int tmp;
//    tmp = *px;
//    *px = *py;
//    *py = tmp;
//}
