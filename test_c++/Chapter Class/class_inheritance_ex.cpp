//
//  class_inheritance_ex.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/02.
//

//#include <iostream>
//using namespace std;
//
//class Point {
//    int x,y;
//
//public:
//    Point(int x_, int y_) : x{x_}, y{y_} { }
//
//    // 접근자
//    int getX() const { return x;}
//    int getY() const { return y;}
//
//    // 설정자
//    void setX(int x_) { x = x_;}
//    void setY(int y_) { y =y_;}
//
//    void print() {
//        cout << "(" << getX() << ", " << getY();
//    }
//};
//
//
//class ThreeDPoint : public Point
//{
//    int z;
//public:
//    ThreeDPoint(int x=0, int y=0, int z_=0) : Point(x,y), z{z_} { }
//
//    // 접근자
//    int getZ() const { return z;}
//
//    // 설정자
//    void setZ(int z_) { z =z_;}
//
//    void print() {
//        Point::print();
//        cout << ", " << getZ() << ")" << endl;
//    }
//
//    ThreeDPoint operator+(const ThreeDPoint& v1)
//    {
//        ThreeDPoint v;
//        v.setX(this->getX()+ v1.getX());
//        v.setY(this->getY()+ v1.getY());
//        v.setZ(this->getZ() + v1.getZ());
//        return v;
//    }
//};
//
//int main()
//{
//    ThreeDPoint p1(10, 10, 10), p2(20, 21, 41), p3;
//    p3 = p1 + p2;
//    p3.print();
//}

//#include <iostream>
//using namespace std;
//
//class Employee
//{
//    string name;
//    int salary;
//
//public:
//    Employee(string n, int s) : name{n} , salary{s} { }
//
//    // 접근자
//    string getName() { return name;}
//    int getSalary() { return salary;}
//
//    // 설정자
//    void setName(string n) { name=n;}
//    void setSalary(int s) { salary=s;}
//
//    int computeSalary() {
//        return salary;
//    }
//
//    void print() {
//        cout << "이름: " << getName() << endl;
//        cout << "월급: " << getSalary() << endl;
//    }
//};
//
//class Manager : public Employee
//{
//    int bonus;
//public:
//    Manager(string n=0, int s=0, int b=0) : Employee(n,s), bonus{b} { }
//
//    // 접근자
//    int getBonus() { return bonus;}
//
//    // 설정자
//    void setBonus(int b) { bonus=b;}
//
//    int computeSalary()
//    {
//        return getSalary() + getBonus();
//    }
//    void print()
//    {
//        Employee::print();
//        cout << "보너스: " << getBonus() << endl;
//        cout << "전체 급여: " << computeSalary() << endl;
//    }
//};
//
//int main()
//{
//    Manager m1("김철수", 200, 100);
//    m1.print();
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Shape {
//    int x,y;
//    string color;
//
//public:
//    Shape(int x_=0, int y_=0, string c="") : x{x_}, y{y_}, color{c} {}
//
//    // 접근자
//    int getX() {return x;}
//    int getY() { return y;}
//    string getColor() {return color;}
//
//    // 설정자
//    void setX(int x_) { x=x_;}
//    void setY(int y_) { y=y_;}
//    void setColor(string c) { color=c;}
//
//    double getArea()
//    {
//        return x*y;
//    }
//
//    void print();
//};
//
//class Circle : public Shape
//{
//public:
//    Circle(int x_=0, int y_=0, string c="") : Shape(x_,y_,c) { }
//
//    void print()
//    {
//        cout << "원의 면적: " << getArea() << endl;
//    }
//};
//
//int main()
//{
//    Circle c1(10,20, "red");
//
//    c1.print();
//    return 0;
//}
