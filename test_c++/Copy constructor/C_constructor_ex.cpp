//
//  C_constructor_ex.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/07/30.
//

//#include <iostream>
//using namespace std;
//
//class Point
//{
//private:
//    int x, y;
//
//public:
//    Point(int x1=0, int y1=0) : x{x1}, y{y1} { }
//    Point(const Point &p2);
//
//    // 접근자
//    int getX() { return x; }
//    int getY() { return y; }
//
//    // 설정자
//    void setX(int x_) { x=x_;}
//    void setY(int y_) {y=y_;}
//
//    void print() {
//        cout << "x: " << getX() << " y: " << getY() << endl;
//    }
//};
//
//Point::Point(const Point &p2)
//{
//    this->setX(p2.x);
//    this->setY(p2.y);
//}
//
//int main()
//{
//    Point x_1 {10, 21};
//    Point x_2 = x_1;
//
//    x_2.print();
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Circle {
//private:
//    int x, y;
//    int radius;
//public:
//
//    Circle() : x {0}, y{0}, radius{0} { print(); }
//    Circle(int x, int y, int r) : x{ x }, y{ y }, radius{r} { print();}
//
//    // 접근자
//    int getX() { return x;}
//    int getY() { return y;}
//    int getRadius() { return radius;}
//
//    // 설정자
//    void setX(int x_) { x=x_; }
//    void setY(int y_) { y=y_; }
//    void setRadius(int r) { radius=r; }
//    void print() {cout << "Circle(" << radius << ")" << endl; }
//
//
//};
//
//Circle getLargerCircle(Circle c1, Circle c2) {
//    Circle temp;
//    temp.setRadius(c1.getRadius() > c2.getRadius() ? c1.getRadius() : c2.getRadius());
////    temp.setX(c1.getX() > c2.getX() ? c1.getX() : c2.getY() );
////    temp.setY(c1.getY() > c2.getY() ? c1.getY() : c2.getY() );
//
//    return temp;
//}
//
//int main()
//{
//    Circle c1 {5,4, 10}, c2{ 3,4, 20};
//    Circle t;
//    t = getLargerCircle(c1, c2);
//    cout << "더 큰 원은 다음과 같다." << endl;
//    t.print();
//
//    return 0;
//}

//#include <iostream>
//#include <memory>
//
//using namespace std;
//
//class Line {
//public:
//    int getLenth() { return *ptr;}
//    Line(int len);
//    ~Line();
//    Line(const Line& other);
//
//    void print()
//    {
//        cout << "선의 길이: " << getLenth() << endl;
//    }
//private:
//    int *ptr;   // 선의 길이를 저장한다.
//};
//
//// 일반 생성자
//Line::Line(int len) {
//    cout << "일반 생성자" << endl;
//    ptr = new int;
//    *ptr = len;
//}
//
//Line::Line(const Line& other)
//{
//    this->ptr = other.ptr;
//    cout << "복사 생성자" << endl << getLenth() << endl;
//}
//
//Line::~Line()
//{
//    cout << "소멸자 호출" << endl;
//    if(ptr != nullptr) delete[] this->ptr;
//    ptr = nullptr;
//}
//
//
//int main()
//{
//    Line p1{10};
//    {
//        Line p2 = p1;
//    }
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class MyClass {
//public:
//    MyClass(const char* str);
//    MyClass(const MyClass& other);
//    ~MyClass();
//
//    void print() {
//        cout << "입력값은 " << this->stored << endl;
//    }
//
//private:
//    char* stored;
//};
//
//MyClass::MyClass(const char* str)
//{
//    stored = new char[strlen(str) + 1];
//    strcpy(stored, str);
//}
//
//// 복사 생성자
//MyClass::MyClass(const MyClass& other)
//{
//    this->stored = new char[strlen(other.stored) +1];
//    strcpy(this->stored, other.stored);
//}
//
//MyClass::~MyClass()
//{
//    delete [] stored;
//}
//
//int main()
//{
//    MyClass c1{"myClass"};
//    c1.print();
//    MyClass c2 = c1;
//    c2.print();
//
//    return 0;
//}
