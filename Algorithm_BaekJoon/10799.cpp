////
////  10799.cpp
////  Algorithm
////
////  Created by 동균 on 2018. 7. 9..
////  Copyright © 2018년 동균. All rights reserved.
////
//
//#include <iostream>
//#include <stack>
//#include <string>
//using namespace std;
//
//
//int main() {
//    
//    stack<int> k ;
//    int sum = 0;
//    string s;
//    cin >> s;
//    
//    for ( int i = 0 ; i < s.size(); i++){
//        if( s[i] == '(') { k.push(i);}
//        else
//            if( s[i] ==')') {
//                if (k.top()+1 == i) {
//                    k.pop();
//                    sum += k.size();
//                }
//                else  {
//                    k.pop();
//                    sum += 1;
//                }
//            }
//    }
//    
//    cout << sum << '\n';
//    return 0;
//    
//    
//}
