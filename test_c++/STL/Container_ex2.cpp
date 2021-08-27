//
//  Container_ex2.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/20.
//

#include <iostream>
#include <list>
using namespace std;

class Student {
    string name;
    string address;
    string pin;
    string phone_number;
    
public:
    Student(string name, string address, string pin, string p_num) : name{name}, address{address}, pin{pin}, phone_number{p_num} { }
    ~Student() { }
    
    string getName() { return name;}
    string getAddress() { return address;}
    string getPin() { return pin;}
    string getPhone_number() { return phone_number;}
    
    void setName(string n) { name = n;}
    void setAddress(string ad) { address = ad;}
    void setPin(string pin) {pin = pin;}
    void setPhone_number(string p_num) { phone_number = p_num;}
    
};

int main()
{
    
}

void drawline() {
    for(int i=0; i < 10; i++)
    {
        cout << '=';
    }
}
