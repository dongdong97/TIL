////
////  product.cpp
////  CH 05
////
////  Created by 동균 on 2018. 5. 24..
////  Copyright © 2018년 동균. All rights reserved.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Product{
//private:
//    int id;
//    string name;
//    int price;
//    
//public:
//    void input();
//    void print();
//    bool isCheaper(Product other);
//};
//
//void Product::input(){
//    cout <<" 상품의 일련 번호:";
//    cin >> id;
//    cout <<" 상품의 이름: ";
//    cin >> name;
//    cout << "상품의 가격: ";
//    cin >> price;
//}
//
//void Product::print(){
//    cout <<" 상품 번호 " << id << endl
//    << " 상품의 이름: " << name << endl
//    << " 상품의 가격: " << price << endl;
//}
//
//bool Product::isCheaper(Product other){
//    if (price < other.price)
//        return true;
//    else
//        return false;
//}
//
//int main(){
//    Product p1, p2;
//    
//    p1.input();
//    p2.input();
//    if(p1.isCheaper(p2)) {
//        p1.print();
//        cout << " 이게 더 쌉니다." << endl;
//    }else{
//        p2.print();
//        cout << " 이게 더 쌉니다." << endl;
//    }
//    
//    return 0;
//}
