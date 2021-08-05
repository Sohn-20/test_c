//
//  C_constructor2.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/07/30.
//

/* 함수로 객체 전달*/
// 1. call by value로 복사 -> 얕은 복사(shallow copy)
//#include <iostream>
//using namespace std;
//
//class Pizza {
//    int radius;
//public:
//    Pizza(int r=0) : radius{ r } { }
//    ~Pizza() { }
//    void setRadius(int r) {radius = r;}
//    void print() { cout << "Pizza(" << radius << ")" << endl; }
//};
//
//void upgrade(Pizza p) {
//    p.setRadius(20);
//}
//
//int main()
//{
//    Pizza obj(10);
//    upgrade(obj);   // 기본 복사 생성자가 호출 -> 객체 obj의 내용이 그대로 복사되어 매개변수로 전달(얕은 복사 실행) = obj 객체의 설정자 실행 x -> obj을 복사한 객체의 설정자가 실행 = obj객체는 유지
//
//    obj.print();
//    return 0;
//}

// 2. 객체의 주소로 복사 -> 깊은 복사(deep copy)
//#include <iostream>
//using namespace std;
//
//class Pizza {
//    int radius;
//public:
//    Pizza(int r=0) : radius{ r } { }
//    ~Pizza() { }
//    void setRadius(int r) {radius = r;}
//    void print() { cout << "Pizza(" << radius << ")" << endl; }
//};
//
//void upgrade(Pizza *p) {
//    (*p).setRadius(20);
//}
//
//int main()
//{
//    Pizza obj(10);
//    upgrade(&obj);  // obj 객체의 주소값을 전달하여 obj 객체 자체 '설정자'를 실행
//
//    obj.print(); // radius값이 upgrade 함수에 의해 20으로 변경
//    return 0;
//}

// 3. 포인터 대신 참조자 매개변수 사용
//#include <iostream>
//using namespace std;
//
//class Pizza {
//    int radius;
//public:
//    Pizza(int r=0) : radius{ r } { }
//    ~Pizza() { }
//    void setRadius(int r) {radius = r;}
//    void print() { cout << "Pizza(" << radius << ")" << endl; }
//};
//
//void upgrade(Pizza& p) {
//    p.setRadius(20);
//}
//
//int main()
//{
//    Pizza obj(10);
//    upgrade(obj);   // 참조자를 통하여 원본 객체에 접근 -> 포인터와 달리 메모리에 주소값을 저장하지 않고 바로 객체에 접근 가능
//
//    obj.print();
//    return 0;
//}

/* 함수가 객체 반환 */
//#include <iostream>
//using namespace std;
//
//class Pizza {
//    int radius;
//public:
//    Pizza(int r=0) : radius{r} { }
//    ~Pizza() { }
//    void setRadius(int r) {radius =r;}
//    void print() { cout << "Pizza(" << radius << ")" << endl; }
//};
//
//// 피자 객체를 반환하는 함수
//Pizza createPizza() {
//    Pizza p(10);
//    return p;   // 기본 복사 생성자 사용
//}
//
//int main()
//{
//    Pizza obj;
//    obj = createPizza();    // createPizza 함수의 반환 객체가 main 함수의 obj으로 대입된다.
//
//    obj.print();
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Complex {
//public:
//    double real, imag;
//    Complex(double r =0.0, double i=0.0) : real{ r }, imag{ i } {
//        cout << "생성자 호출" << endl;
//    }
//    ~Complex() { cout << "소멸자 호출" << endl; }
//
//    void print() {
//        cout << real << "+" << imag << "i" << endl;
//    }
//};
//
//Complex add(Complex c1, Complex c2)
//{
//    Complex temp;
//    temp.real = c1.real + c2.real;
//    temp.imag = c1.imag + c2.imag;
//    return temp;
//}
//
//int main() {
//    Complex m1 {4,5},m2 {3,6};
//    Complex t;
//
//    t= add(m1,m2);
//    t.print();
//    return 0;
//
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Date {
//    int year, month, day;
//
//public:
//    Date(int y, int m, int d) : year{y}, month{m}, day{d} {}
//    void print() {
//        cout << year << "." << month << "." << day << endl;
//    }
//
//};
//
//class Person {
//    string name;
//    Date birth; // has-a 관계
//
//public:
//    Person(string n, Date d) : name{n}, birth{d} { }
//    void print() {
//        cout << name << ":";
//        birth.print();
//        cout << endl;
//    }
//};
//
//int main()
//{
//    Date d{1998,3,1};
//    Person p{"kim", d};
//    p.print();
//    return 0;
//}
