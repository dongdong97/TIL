////
////  DFS.cpp
////  Algorithm
////
////  Created by 동균 on 2018. 7. 16..
////  Copyright © 2018년 동균. All rights reserved.
////
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<int> a[1001];
//bool check[1001];
//
////dfs(x) 는 x를 방분했다는 의미
//// 재귀함수로 구현하는 이유 : 재귀함수는 이미 스택으로 구현되어 있다.
////                      pop이 되었을때 어디까지 재귀함수가 돌아갔는지 알기 쉽다.
//
//void dfs(int x){
//    check[x] = true;
//
////// 인접행렬로 구현
////    for(int i=0; i<=n; i++){ // 다음 정점을 찾는 과정
////        if a[x][i] == 1 & check[i] == false; // x->i로 가는 간선이 있고 체크 값이 0일때 간선으로 간다는 것이다.
////        dfs(i);
////    }
////
//// 인접 리스트로 구현
//    
////    a[x] 에는 x 와 연결된 정점의 개수
////    그래서 size를 통해 정점이 있는것만 파악이 가능하다.
//    for(int i=0; i<a[x].size(); i++){
//        int y = a[x][i];
//        if (check[y] == false){
//            dfs(y);
//        }
//    }
//}
//
//
//int main() {
//    
//    
//}
