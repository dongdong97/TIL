////
////  2468.cpp
////  Algorithm
////
////  Created by 동균 on 2018. 7. 17..
////  Copyright © 2018년 동균. All rights reserved.
////
//
//#include <string.h>
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int N , P;
//
//int dy[4] ={1,-1,0,0};
//int dx[4] ={0,0,1,-1};
//int board[100][100] = {0};
//int check[100][100] = {0};
//
//void dfs(int y, int x, int h){
//    for(int i=0; i<4; i++){
//        int ny = y+dy[i];
//        int nx = x+dx[i];
//        
//        if(nx <0 || ny <0 || ny>=N || nx>=N)
//            continue;
//        
//        if(board[ny][nx] >= h && !check[ny][nx]){
//            check[ny][nx]++;
//            dfs(ny, nx, h);
//        }
//    }
//}
//int main() {
//    
//    //입력처리
//    scanf("%d", &N);
//    for(int i = 0; i< N; i++){
//        for(int j = 0; j < N; j++){
//            scanf("%d",&P);
//            board[i][j] = P;
//        }
//    }
//    int cnt = 0;
//    int tmp = 0;
//    
//    // dfs
//    for(int h = 0; h <=100; h++){
//        memset(check, 0, sizeof(check));
//        cnt = 0;
//        for(int i = 0; i< N; i++){
//            for(int j = 0; j < N; j++){
//                if(board[i][j] >= h && !check[i][j]){
//                    dfs(i, j, h);
//                    cnt++;
//                }
//            }
//        }
//        tmp = max(cnt,tmp);
//    }
//    cout << tmp<< endl;
//    return 0;
//}
