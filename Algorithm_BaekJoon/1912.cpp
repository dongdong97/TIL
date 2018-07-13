////
////  1912.cpp
////  Algorithm
////
////  Created by 동균 on 2018. 7. 12..
////  Copyright © 2018년 동균. All rights reserved.
////
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int number[100001];
//int sum[100001];
//
//int main() {
//    int n;
//    int bestmax;
//    
//    cin >> n;
//    for(int i=0;i<n;i++){
//        scanf("%d", &number[i]);
//    }
//    
//    sum[0] = number[0];
//    bestmax = number[0];
//    for(int i=1; i<n; i++){
//        sum[i] = max(sum[i-1] + number[i],number[i]);
//        bestmax = max(sum[i],bestmax);
//    }
//    
//    cout << bestmax;
//    return 0;
//    
//}
