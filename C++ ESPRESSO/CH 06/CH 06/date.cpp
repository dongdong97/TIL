////
////  date.cpp
////  CH 06
////
////  Created by 동균 on 2018. 6. 15..
////  Copyright © 2018년 동균. All rights reserved.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Date{
//private:
//    int year;
//    int month;
//    int day;
//public:
//    Date();
//    Date(int year);
//    Date(int year, int month, int day);
//    void setDate(int year, int month, int day);
//    void print();
//};
//
//Date::Date(){
//    year = 2010;
//    month = 1;
//    day = 1;
//}
//Date::Date(int year){
//    setDate(year, 1, 1);
//}
//Date::Date(int year, int month, int day){
//    setDate(year, month, day);
//}
//
//void Date::setDate(int year, int month, int day){
//    this ->month = month;
//    this ->day = day;
//    this ->year = year;
//}
//void Date::print(){
//    cout << year << " 년 " << month << " 월 " << day << " 일 " << endl;
//}
//
//
//int main(){
//    Date date1(2009,3,2);
//    Date date2(2000);
//    Date date3;
//    
//    date1.print();
//    date2.print();
//    date3.print();
//    return 0;
//}
