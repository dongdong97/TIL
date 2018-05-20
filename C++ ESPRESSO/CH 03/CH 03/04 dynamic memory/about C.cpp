////
////  about C.cpp
////  CH 03
////
////  Created by 동균 on 2018. 5. 20..
////  Copyright © 2018년 동균. All rights reserved.
////
//
//
//// C언어에서 동적 메모리 할당방법. malloc() & free()
//#include <iostream>
//using namespace std;
//
//int main() {
//    const int MAX_SIZE = 100;
//    int *pi;  // 동적 메모리를 가리키는 포인터
//    
//    pi = (int *)malloc(MAX_SIZE * sizeof(int));
//    
//    for ( int i =0; i < MAX_SIZE; i++)
//        *pi = 0;  // 동적메모리 사용
//
//    free(pi);  // 동적 메모리 반납
//    
//    return 0;
//}
//
//
