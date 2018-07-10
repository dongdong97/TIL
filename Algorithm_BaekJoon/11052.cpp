//
//  11052.cpp
//  Algorithm
//
//  Created by 동균 on 2018. 7. 10..
//  Copyright © 2018년 동균. All rights reserved.
//
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int d[1001];
//int arr[1001];
//
//int main() {
//    int num;
//    cin >> num;
//    int max =0;
//    
//    for (int i=1; i<= num ; i++){
//        cin >> arr[i];
//    }
//    d[0] = 0;
//    d[1] = arr[1];
//    for(int i=2; i<= num ; i++){
//        for( int j=1; j<=i; j++){
//            d[i] = d[i-j] + arr[j];
//            if( d[i] > max)
//                max = d[i];
//        }
//        d[i] = max;
//    }
//   
//    cout << max << endl;
//}

