//
//  freind_1.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/01.
//

//#include <iostream>
//#include <string>
//using namespace std;
//
//class A {
//public:
//    friend class B; // B가 A의 프렌드가 된다.
//    A(string s="") : secret{s} { }
//
//private:
//    string secret;  // 프렌드 클래스 B가 접근 가능함
//};
//
//// friend 클래스 정의(구현)
//class B {
//public:
//    B() { }
//    void print(A obj) {
//        cout << obj.secret << endl;
//    }
//};
//
//int main()
//{
//    A a("가입 기밀 정보");
//    B b;
//    b.print(a);
//
//    return 0;
//}

/* 프렌드 함수의 용도 */
//#include <iostream>
//using namespace std;
//
//class Date {
//    friend bool equal(Date d1, Date d2);    // friend 함수 선언
//    int year, month, day;
//
//public:
//    Date(int y=0, int m=0, int d=0) : year{y}, month{m}, day{d} { }
//};
//
//// friend 함수 정의(구현)
//    bool equal(Date d1, Date d2)
//{
//        return d1.year == d2.year && d1.month == d2.month && d1.day == d2.day;
//}
//
//int main()
//{
//    Date d1(1960, 5, 23), d2(2002, 7, 23);
//    // 참과 거짓을 1, 0이 아니라 true, false로 출력하도록 설정
//    cout.setf(cout.boolalpha);
//    cout << equal(d1, d2) << endl;
//
//    return 0;
//}

/* 프렌드 함수 용도 2
   객체 간의 연산 */
//#include <iostream>
//using namespace std;
//
//class Complex {
//public:
//    friend Complex add(Complex, Complex);   // friend 함수 선언
//    Complex(double r=0.0, double i=0.0) { re = r; im = i; }
//    void print() {
//        cout << re << " + " << im << "i" << endl;
//    }
//private:
//    double re, im;
//};
//
//Complex add(Complex a1, Complex a2)
//{
//    return Complex(a1.re + a2.re, a1.im + a2.im);
//}
//
//int main()
//{
//    Complex c1(1,2), c2(3,4);
//    Complex c3 = add(c1, c2);
//    c3.print();
//
//    return 0;
//}

#include <iostream>
using namespace std;

class MyVector
{
private:
    double x, y;
    
public:
    MyVector(double xvalue = 0.0, double yvalue = 0.0) : x(xvalue), y(yvalue) { }
    
    friend ostream& operator<<(ostream& os, const MyVector& v) {
        os << "(" << v.x << "," << v.y << ")" << endl;
        return os;
    }
    
    friend ostream& operator>>(istream& in, MyVector& v) {
        in >> v.x >> v.y;
        if(!in)     // 입력 오류 처리
        {
            v = MyVector(0, 0);
        }
        return in; // 에러가 나는데 해결 못함
    }
};


int main()
{
    MyVector v1(1.0, 2.0), v2(3.0, 4.0), v3;
    cout << v1 << v2 << v3;
    
    return 0;
}
