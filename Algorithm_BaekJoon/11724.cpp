////
////  11724.cpp
////  Algorithm
////
////  Created by 동균 on 2018. 7. 16..
////  Copyright © 2018년 동균. All rights reserved.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> a[1001];
//bool check[1001];
//
//void dfs(int x) {
//    check[x] = true;
//    for (int i=0; i<a[x].size();i++){
//        int y = a[x][i];
//        if(check[y] == false){
//            check[y] = true;
//            dfs(y);
//        }
//    }
//}
//int main() {
//    int n, m;
//    int cnt = 0 ;
//    scanf("%d %d",&n,&m);
//    for (int i=0; i<m; i++) {
//        int u,v;
//        scanf("%d %d",&u,&v);
//        a[u].push_back(v);
//        a[v].push_back(u);
//
//    }
//    //인접요소가 1이었다면  시작 값을 정해주고 바로 dfs에 대입!
//    for (int i=1; i<=n; i++) {
//        if(check[i] == false){
//            dfs(i);
//            cnt++;
//        }
//    }
//    cout << cnt <<endl;
//    return 0;
//}
