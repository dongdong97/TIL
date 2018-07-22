//
//  2667.cpp
//  Algorithm
//
//  Created by 동균 on 2018. 7. 22..
//  Copyright © 2018년 동균. All rights reserved.
//

#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>

using namespace std;

int N;
int board[25][25];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int check[25][25] = {0, };
int ans = 0;
int cnt[25] = {0};



void dfs(int y, int x){
    
    cnt[ans]++;
    for (int i = 0; i<4; i++){
        int ny = y+dy[i];
        int nx = x+dx[i];
        
        if ( ny<0 || nx<0 || ny>= N || nx>= N)
            continue;
        
        if ( board[ny][nx] && !check[ny][nx]){
            check[ny][nx]++;
            dfs(ny,nx);
        }
    }
    
}
int main() {
    scanf("%d",&N);
    
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            scanf("%1d",&board[i][j]);
        }
    }
    
    for(int i=0 ; i<N; i++){
        for( int j = 0 ;j<N; j++){
            if(board[i][j] && !check[i][j]){
                check[i][j]++;
                dfs(i,j);
                ans++;
            }
        }
    }
    sort(cnt, cnt + ans);
    cout << ans<<endl;
    for(int i=0; i<ans;i++){
        cout << cnt[i]<< endl;
    }
    
}

