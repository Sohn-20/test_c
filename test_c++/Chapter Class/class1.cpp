//  class1.cpp
//  test_c2
//
//  Created by 손병훈 on 2021/07/19.
//
// 클래스 = 자료 저장 + 자료 처리 = 변수 + 함수
// 클래스(타입): 특정한 용도를 수행하기 위한 변수와 함수를 모아 둔 틀(자료형)
// 객체(오브젝트): 그 틀을 이용하여 찍어낸 개체(변수, 메모리 상의 공간)
// struct vs class 문법 차이: 접근 제어 지시자를 사용하지 않는다면 디폴트로
// struct : public
// class : private

//#include <iostream>
//using namespace std;

//class Person
//{
//    string name;
//    int age;

//public:
//    void setPerson(string n, int a);
//    void print();
//};

//void Person::setPerson(string n, int a)
//{
//    name = n;
//    age = a;
//}

//void Person::print() {
//    cout << name << endl;
//    cout << age << endl;
//}

//int main() {
//    Person obj;
//
//    obj.setPerson("김철수", 21);
//    obj.print();
//
//    return 0;
//}

//#include <iostream>
//using namespace std;

//class Computer
//{
//    string name;
//    int RAM;
//    double cpu_speed;

//public:
//    void setComputer(string name, int RAM, double cpu_speed);
//    void print();
//};

//void Computer::setComputer(string n, int R, double cs)
//{
//    name = n;
//    RAM = R;
//    cpu_speed = cs;
//}

//void Computer::print() {
//    cout << "이름: " << name << endl;
//    cout << "RAM: " << RAM << endl;
//    cout << "cpu_speed: " << cpu_speed << endl;
//}
//int main() {
//    Computer obj;
//
//    obj.setComputer("오피스컴퓨터", 8, 4.7);
//    obj.print();
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Sum
//{
//    int n1, n2;

//public:
//    void init(int x, int y);
//    int add();
//    void print();
//};
//
//void Sum::init(int x, int y)
//{
//    n1 = x;
//    n2 = y;
//}
//
//int Sum::add()
//{
//    return (n1+n2);
//}
//
//void Sum::print()
//{
//    cout << "첫 번째 정수: " << n1 << endl;
//    cout << "두 번째 정수: " << n2 << endl;
//}
//
//int main()
//{
//    Sum obj;
//    obj.init(10, 20);
//    obj.add();
//
//    obj.print();
//    cout << "연산 결과: " << obj.add();
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Book {
//public:
//    string title;
//    string author;
//};
//
//int main()
//{
//    Book obj;
//    obj.title = "Great C++";
//    obj.author = "Bob";
//
//    cout << "책 이름: " << obj.title << endl;
//    cout << "책 저자: " << obj.author;
//}

//#include <iostream>
//#include "time.h"
//using namespace std;
//
//class Dice
//{
//    int face;
//
//public:
//    int roll();
//};
//
//int Dice::roll()
//{
//    face = (int) (rand()%6 + 1);
//
//    return face;
//}
//
//int main()
//{
//    srand((unsigned int)time(NULL));
//    Dice obj;
//    cout << "주사위 값= " << obj.roll() << endl;
//    cout << "주사위 값= " << obj.roll() << endl;
//}

//#include <iostream>
//using namespace std;
//
//class Employee
//{
//    string name;
//    int age;
//    int salary;
//
//public:
//    void init(string n, int a, int s);
//    void print();
//};
//
//void Employee::init(string n, int a, int s)
//{
//    name = n;
//    age = a;
//    salary = s;
//}
//
//void Employee::print()
//{
//    cout << name << endl << age << endl << salary;
//}
//
//class CellPhone
//{
//    string number;
//    string model;
//    string color;
//    bool on=0;
//
//public:
//    void init(string n, string m, string c);
//    bool setOn();
//    void print();
//};
//
//void CellPhone::init(string n, string m, string c)
//{
//    number = n;
//    model = m;
//    color = c;
//}
//
//bool CellPhone::setOn() {
//    if(on == false)
//    {
//        return on = true;
//    }
//    else
//    {
//        return on = false;
//    }
//}
//
//void CellPhone::print()
//{
//    cout << number << endl << model << endl << color << endl<< on;
//}
//
//class Complex
//{
//public:
//    double r;
//    double i;
//
//    void print();
//};
//
//void Complex::print()
//{
//    cout << r << '+' << i << 'i' << endl;
//}
//
//int main()
//{
//    Employee Employee1;
//    CellPhone Phone1;
//    Complex Com1;
//
//    Employee1.init("김철수", 38, 2000000);
//    cout << "Employee1 :"  << endl;
//    Employee1.print();
//
//    Phone1.init("010-1234-5678", "Galaxy", "Black");
//    Phone1.setOn();
//    cout << "CellPhone1: " << endl;
//    Phone1.print();
//
//    cout << endl;
//    Com1.r =5; Com1.i = 3;
//    Com1.print();
//    Com1.r = 3; Com1.i = 4;
//    Com1.print();
//}
//
//#include <iostream>
//using namespace std;
//
//class BankAccount
//{
//    string number;
//    int balance;
//
//public:
//    void init(string n, int b);
//    void deposit(int amount);
//    void withdraw(int amount);
//};
//
//void BankAccount::init(string n, int b)
//{
//    number = n;
//    balance = b;
//}
//
//void BankAccount::deposit(int amount)
//{
//    balance += amount;
//    cout << "after deposit"<< '(' << balance - amount << ')' << "현재 잔액: " << balance << endl;
//}
//
//void BankAccount::withdraw(int amount)
//{
//    balance -= amount;
//    cout << "after withdraw"<< '(' << balance + amount << ')' << "현재 잔액: " << balance << endl;
//}
//
//int main()
//{
//    BankAccount user1;
//    user1.init("1101321111", 10000000);
//    user1.deposit(10000000);
//    user1.withdraw(10000000);
//}
//
//#include <iostream>
//using namespace std;
//
//class Box
//{
//    double length;
//    double width;
//    double height;
//    
//public:
//    double getVolume();
//    void Box_init(double length, double width, double height);
//};
//
//void Box::Box_init(double l, double w, double h)
//{
//    length = l;
//    width = w;
//    height = h;
//}
//
//double Box::getVolume()
//{
//    return length * width * height;
//}
//
//class Time{
//private:
//    int hour;
//    int minute;
//    int second;
//    
//public:
//    void setTime(const int h, const int m, const int s);
//    void print();
//};
//
//void Time::setTime(const int h, const int m, const int s)
//{
//    hour = h;
//    minute = m;
//    second = s;
//}
//
//void Time::print()
//{
//    cout << hour << ':' << minute << ':' << second << endl;
//}
//
//int main()
//{
//    Box box1;
//    Time time1;
//    
//    box1.Box_init(6, 7, 5);
//    cout << "상자의 부피: " << box1.getVolume() << endl;
//    
//    time1.setTime(07, 10, 20);
//    time1.print();
//}
