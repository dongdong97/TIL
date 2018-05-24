////
////  bank_account.cpp
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
//class BankAccount {
//private:
//    int accountNumber;
//    string owner;
//    int balance;
//    
//public:
//    void setBalance(int amount);
//    int getBalance();
//    void deposit(int amount);
//    void withdraw(int amount);
//    void print();
//};
//
//void BankAccount::setBalance(int amount){
//    balance = amount;
//}
//
//int BankAccount::getBalance(){
//    return balance;
//}
//
//void BankAccount::deposit(int amount){
//    balance += amount;
//}
//
//void BankAccount::withdraw(int amount){
//    balance -= amount;
//}
//
//void BankAccount::print(){
//    cout <<"잔액은 " << balance << " 입니다." << endl;
//}
//
//int main() {
//    BankAccount account;
//    
//    account.setBalance(0);
//    account.deposit(10000);
//    account.print();
//    account.withdraw(2000);
//    account.print();
//    
//    return 0;
//    
//}
