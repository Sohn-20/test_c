//
//  this.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/07/26.
// this 포인터는 매개변수로 해당 클래스의 *this라는 포인터를 내장하여 건네준다.

#include <iostream>

using namespace std;

class MyClass {
public:
//    void PrintThis() {
//        cout << "나의 주소는 " << this << endl;
//    }
    
    // this 대신 포인터로 대체
    void PrintThis(MyClass *ptr) {
        cout << "나의 주소는 " << ptr << endl;
    }
};

int main() {
    MyClass a, b;
    
    cout << "a의 주소는 " << &a << endl;
    cout << "a의 주소는 " << &b << endl;
    
    a.PrintThis(&a);
    b.PrintThis(&b);
}
