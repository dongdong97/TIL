////
////  matrix.cpp
////  CH 03
////
////  Created by 동균 on 2018. 5. 20..
////  Copyright © 2018년 동균. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//
//const int ROWS = 3;
//const int COLS = 3;
//
//int main() {
//    int A[ROWS][COLS] = { {2,3,0},{8,9,1},{7,0,5}};
//    int B[ROWS][COLS] = { {1,0,0},{1,0,0},{1,0,0}};
//    
//    int C[ROWS][COLS];
//    int r,c;
//    
//    //두개의 행렬을 더한다.
//    for (r=0; r< ROWS; r++)
//        for (c= 0; c< COLS; c++)
//            C[r][c] = A[r][c] + B[r][c];
//    
//    //행렬을 출력한다.
//    for (r=0; r< ROWS; r++)
//    {
//        for (c=0; c< COLS; c++)
//            cout << C[r][c] << " ";
//        cout << endl;
//    }
//}
