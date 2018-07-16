////
////  1260.cpp
////  Algorithm
////
////  Created by 동균 on 2018. 7. 16..
////  Copyright © 2018년 동균. All rights reserved.
////
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//#include <string.h>
//using namespace std;
//vector<int> a[1001];
//bool check[1001];
//
//void dfs(int x){
//    check[x] = true;
//    printf("%d ",x);
//    for(int i=0; i<a[x].size(); i++){
//        int y = a[x][i];
//        if(check[y] == false)
//            dfs(y);
//    }
//}
//
//void bfs(int start) {
//    queue<int> q;
//    memset(check,false,sizeof(check));
//    check[start] = true;
//    q.push(start);
//    while (!q.empty()) {
//        int node = q.front();
//        q.pop();
//        printf("%d ",node);
//        for (int i=0; i<a[node].size(); i++) {
//            int next = a[node][i];
//            if (check[next] == false) {
//                check[next] = true;
//                q.push(next);
//            }
//        }
//    }
//}
//
////
////void bfs(int x){
////    queue<int> q;
////    memset(check,false,sizeof(check));
////    check[x] = true;
////    q.push(x);
////    while (!q.empty()) {
////        int node = q.front();
////        q.pop();
////        printf("%d ",node);
////        for (int i=0; i<a[node].size();i++){
////            int y = a[node][i];
////            if(check[y] == false){
////                check[y] = true;
////                q.push(y);
////            }
////        }
////    }
////}
//
//int main() {
//    int n, m, start;
//    scanf("%d %d %d",&n,&m,&start);
//    for (int i=0; i<m; i++) {
//        int u,v;
//        scanf("%d %d",&u,&v);
//        a[u].push_back(v);
//        a[v].push_back(u);
//    }
//    for (int i=1; i<=n; i++) {
//        sort(a[i].begin(), a[i].end());
//    }
//    dfs(start);
//    cout << endl;
//    bfs(start);
//    return 0;
//}
