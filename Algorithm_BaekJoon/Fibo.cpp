////
////  Fibo.cpp
////  Algorithm
////
////  Created by 동균 on 2018. 7. 10..
////  Copyright © 2018년 동균. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//
// // top - down 방법
//    int memo[100];
//    int fibonacci(int n){
//    if ( n<=1 ) {
//        return n;}
//    else {
//        if (memo[n] > 0) { // 0보다 큰 값들이기에 앞에서 저장한 것을 불러와 시간을 줄인다.
//            return memo[n];
//        }
//        memo[n] = fibonacci(n-1)+ fibonacci(n-2); // 이미 앞에서 계산으로 나온 값을 저장
//        return memo[n];
//    }
//    }
//
//// button - up  방법
//
//int d[100];
//int fibonacci(int n){
//    d[0] = 0;
//    d[1] = 1;
//    for (int i=2; i<=n; i++){
//        d[i] = d[i-1] + d[i-2];
//    }
//    return d[n];
//}
//    
//int main() {
//
//}
