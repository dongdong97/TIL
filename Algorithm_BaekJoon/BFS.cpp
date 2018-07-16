////
////  BFS.cpp
////  Algorithm
////
////  Created by 동균 on 2018. 7. 16..
////  Copyright © 2018년 동균. All rights reserved.
////
//
//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//bool check[1001];
//vector<int>a[1001];
//
//void bfs(int x){
//queue<int> q;
////    시작점을 큐에 넣는데 체크값도 true로 넣어준다.
//check[1] = true;
//    q.push(1);
//    while (!q.empty()) {
//        int x = q.front();  //제일 앞에 있는 x 의 값을 빼 다음 정점을 구한다.
//        q.pop();
//        
//        // 인접행렬
////        for(int i=1;i<=n; i++){
////            if(a[x][i] ==1 && check[i] ==false){
////                check[i] = true;
////                q.push(i);
////            }
////        }
//        
//        // 인접 리스트
//        for (int i=0; i<a[x].size(); i++){
//            int y = a[x][i];
//            if(check[y] ==false){
//                check[y] = true;
//                q.push(y);
//            }
//        }
//    }
//
//    
//}
//
//int main(){
//    
//}
