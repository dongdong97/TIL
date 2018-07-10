////
////  1463.cpp
////  Algorithm
////
////  Created by 동균 on 2018. 7. 10..
////  Copyright © 2018년 동균. All rights reserved.
////
//
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int n;
//
//    cin >> n;
//   
//    
//    int d[n];
//    for (int i=2; i<=n; i++){
//        d[i] = d[i-1]+1;
//        if(i%2 == 0 && d[i] > d[i/2] +1) {
//            d[i] = d[i/2] +1;
//        }
//        if(i%3 == 0 && d[i] > d[i/3] +1){
//            d[i] = d[i/3]+1;
//        }
//    }
//    
//}
