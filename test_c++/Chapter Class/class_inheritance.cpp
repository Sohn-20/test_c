//
//  class_inheritance.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/01.
//

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Car {
//    int speed;  // 속도
//
//public:
//    // 설정자
//    void setSpeed(int s) { speed = s; }
//    // 접근자
//    int getSpeed() { return speed; }
//
//};
//
//// Car 클래스를 상속 받는 SportsCar 클래스
//class SportsCar : public Car {
//    bool turbo;
//
//public:
//    void setTurbo(bool newValue) { turbo = newValue; }
//    bool getTurbo() { return turbo;}
//};
//
//int main()
//{
//    SportsCar c;
//
//    c.setSpeed(60);     // 부모 클래스 함수 호출
//    c.setTurbo(true);   // 자식 클래스 함수 호출
//    c.setSpeed(100);
//    c.setTurbo(false);
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Shape {
//    int x, y;
//public:
//    Shape() {   cout << "Shape 생성자()" << endl;  }
//    Shape(int xloc, int yloc) : x(xloc) , y(yloc) {
//        cout << "Shape 생성자(xloc, yloc) " << endl;
//    }
//    ~Shape() {  cout << "Shape 소멸자()" << endl;  }
//};
//
//class Rectangle : public Shape
//{
//    int width, height;
//public:
//    Rectangle() { cout << "Rectangle 생성자()" << endl;    }
//    Rectangle(int x, int y, int w, int h) : Shape(x,y) {
//        width = w;
//        height = h;
//        cout << "Rectangle 생성자(x, y, w, h)" << endl;
//    }
//    ~Rectangle() { cout << "Rectangle 소멸자()" << endl;    }
//};
//
//int main()
//{
//    cout << "r1" << endl;
//    Rectangle r1(0,0,100,100);
//    cout << endl << "r2" << endl;
//    Rectangle r2;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Person {
//    string name;
//protected:
//    string address;
//};
//
//class Student : Person {
//public:
//    void setAddress(string add) {
//        address = add;  // protected 멤버는 자식 클래스에서 사용 가능
//    }
//    string getAddress() { return address;}
//};
//
//int main() {
//    Student num1;
//
//    num1.setAddress("서울시 종로구 1번지");
//    cout << num1.getAddress() << endl;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Sprite
//{
//    int x, y;
//    string image;
//public:
//    Sprite(int x_=0, int y_=0, string i="") : x(x_), y(y_), image(i) { }
//    void draw() {}
//    void move() {}
//};
//
//class Player : public Sprite
//{
//    string name;
//public:
//    Player(int x, int y, string n) : Sprite(x, y, n) { }
//    void move() {
//
//    }
//};
//
//class Alien : public Sprite
//{
//    int speed;
//public:
//    Alien(int x, int y, string n) : Sprite(x,y,n) { }
//    void move() {
//
//    }
//};
//
//int main()
//{
//    Alien a( 0, 100 ,"image1.jpg");
//    Player p(0, 100, "image1.jpg");
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class PassangerCar {
//public:
//    int seats;  // 정원
//
//    int getSeats() { return seats; }
//    void set_seats(int n) { seats = n; }
//
//};
//
//class Truck {
//public:
//    int payload;    // 적재 하중
//
//    int getPayLoad() { return payload;}
//    void set_payload(int load) { payload = load; }
//};
//
//class Pickup : public PassangerCar, public Truck
//{
//public:
//    int tow_capability; // 견인 능력
//    void set_tow(int cape) { tow_capability = cape;}
//};
//
//int main()
//{
//    Pickup my_car;
//    my_car.set_seats(4);
//    my_car.set_payload(10000);
//    my_car.set_tow(30000);
//
//    cout << "좌석 수: " << my_car.getSeats() << endl;
//    cout << "적재하중: " << my_car.getPayLoad() << endl;
//    cout << "견인 능력: " << my_car.tow_capability << endl;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class SuperA
//{
//public:
//    int x;
//    void sub() {
//        cout << "SuperA의 sub()" << endl;
//    }
//};
//
//class SuperB
//{
//public:
//    int x;
//    void sub() {
//        cout << "SuperB의 sub()" << endl;
//    }
//};
//
//class Sub : public SuperA, public SuperB
//{
//};
//
//int main()
//{
//    Sub obj;
//    // obj.x = 10; // x는 어떤 부모의 x를 참조하는 지 모호하다.
//    obj.SuperA::x = 10;
//    cout << obj.SuperA::x << endl;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Person
//{
//    int birthYear;
//    string name;
//public:
//    Person(string n, int b) : name{n}, birthYear{b} { }
//
//    void print()
//    {
//        cout << "이름: " << name << endl;
//        cout << "출생년도: " << birthYear << endl;
//    }
//};
//
//class Student : public Person
//{
//    string university;
//public:
//    Student(string n, int b, string u) : Person(n, b), university{u} { }
//
//    void print() {
//        Person::print();
//        cout << "대학교: " << university << endl;
//    }
//};
//
//int main() {
//    Student s1("홍길동", 1997, "한국대학교");
//
//    s1.print();
//
//    return 0;
//}

