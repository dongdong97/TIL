////
////  hangman.cpp
////  CH 04
////
////  Created by 동균 on 2018. 5. 23..
////  Copyright © 2018년 동균. All rights reserved.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string prob = "space";
//    int length = prob.length();
//    int tries = 0;
//    string answer(length, '-');  // - 로 초기화
//    
//    cout << " 현재 상태 : " << answer << endl;
//    while(tries < 6 && answer != prob){
//        char c;
//        cout << "코난이 되어보세요";
//        cin >> c;
//        if ( answer.find(c) != string::npos) {ㅁ // string::npos 는 find()에서 찾고자 하는 단어가 없을때 반환되는 값이다.
//            cout << "전과 동일한 글자입니다.";
//            continue;
//        }
//        int pos = prob.find(c);
//        if(pos == string::npos) {
//            cout <<"추측한 글자가 없습니다." << endl;
//            tries++;
//            continue;
//        }
//        else{
//            answer[pos] = c;
//            pos = prob.find(c, pos+1);
//            while (pos != string::npos) {
//                answer[pos] = c;
//                pos = prob.find(c, pos+1);
//            }
//        }
//        cout << "현재상태 :" <<answer << endl;
//        if ( answer == prob) {
//            cout << " 맞았습니다. " << endl;
//            break;
//        }
//    }
//    if (tries >= 6){
//        cout <<" 틀렸습니다. 정답은 " << prob << " 입니다. \n";
//    }
//    return 0;
//}
