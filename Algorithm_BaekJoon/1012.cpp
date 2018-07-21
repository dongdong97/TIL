////
////  1012.cpp
////  Algorithm
////
////  Created by 동균 on 2018. 7. 17..
////  Copyright © 2018년 동균. All rights reserved.
////
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string.h>
//using namespace std;
//
//int dx[4] = {0,0,1,-1};
//int dy[4] = {1,-1,0,0};
//
//int T, R, C, P;
//int X,Y;
//int board[50][50] = {0};
//int che[50][50] = {0};
//int ans = 0;
//
//void dfs(int y, int x){
//    
//    for (int i = 0; i<4; i++){
//        int ny = y+ dy[i];
//        int nx = x+ dx[i];
//        
//        if(nx<0 || ny<0 || ny>= C || nx >= R)
//            continue;
//        
//        if(board[ny][nx] && !che[ny][nx]){
//            che[ny][nx]++;
//            dfs(ny, nx);
//        }
//        
//    }
//}
//
//int main() {
//    scanf("%d",&T);
//    for (int s = 0 ; s < T ; s++){
//        
//        ans = 0;
//        memset(board, 0, sizeof(board));
//        memset(che, 0, sizeof(che));
//        
//        scanf("%d %d %d", &R, &C, &P);
//        for( int i=0; i<P; i++){
//            scanf("%d %d", &X,&Y);
//            board[Y][X] = 1;
//        }
//        // dfs 넣어야한다.
//        for (int y = 0; y<C; y++){
//            for (int x =0; x<R; x++){
//                if(board[y][x] && !che[y][x]){
//                    ans++;
//                    dfs(y,x);
//                }
//            }
//        }
//        cout << ans<<endl;
//    }
//    
//    
//    return 0;
//}
//
//
