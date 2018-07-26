////
////  18.cpp
////  Algorithm
////
////  Created by 동균 on 2018. 7. 25..
////  Copyright © 2018년 동균. All rights reserved.
////
//
#include <iostream>
#include <list>
using namespace std;


list<int> josephus;

int main() {
    int c,n,k;  // c 테스트케이스  n 총 사람수  k k번째 사람
    
    scanf("%d",&c);
    for(int i=1; i<=c; i++){ // 테스트케이스 만큼 입력받기
        scanf("%d %d",&n,&k);
        
        for(int j=1; j<=n ; j++)
            josephus.push_back(j);  // list 에 인원수만큼 추가
        list<int>::iterator kill =josephus.begin(); // list 맨처음 값 지정 즉 죽는 값
        josephus.erase(kill);  // 맨처음 삭제
        
        
        while (josephus.size() > 2) {  // 크기가 2일때 까지 즉 2명남을때까지
            

            for(int i=0; i<k; i++){
                kill++;
                if(kill == josephus.end()){
                    kill = josephus.begin();
                    
                }
                
            }
            josephus.erase(kill);
        }

//        값 출력
//        josephus.sort();
        cout << josephus.front() << " " << josephus.back();

    }
}
