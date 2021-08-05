//
//  C_constructor_ex2.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/07/31.
//

//#include <iostream>
//
//using namespace std;
//
//class Point
//{
//private:
//    double xval, yval;
//
//public:
//    // 생성자
//    Point(double x=0.0, double y=0.0): xval{x}, yval{y} {}
//
//
//
//    // 접근자
//    double getX() { return xval;}
//    double getY() { return yval;}
//
//    // 설정자
//    void setX(double x_) { xval = x_; }
//    void setY(double y_) { yval = y_; }
//
//    void print()
//    {
//        cout << "(" << getX() << "," << getY() << ")" << endl;
//    }
//    // 복사 생성자는 default 복사 생성자를 사용
//};
//
//// 두 개의 Point 객체를 교환하는 swap 함수
///* 1. temp라는 객체 생성하여 p1의 객체의 X,Y값을 저장
//   2. p1 객체의 X,Y값을 p2 객체의 X,Y값으로 저장
//   3. p2 객체의 X,Y값을 temp라는 객체의 X,Y값으로 저장
//   4. temp 객체를 반환*/
//Point swap(Point* p1, Point* p2)
//{
//    Point temp;
//    temp.setX(p1->getX());
//    temp.setY(p1->getY());
//
//    p1->setX(p2->getX());
//    p1->setY(p2->getY());
//
//    (*p2).setX(temp.getY());
//    (*p2).setY(temp.getY());
//
//    return temp;
//}
//
//int main()
//{
//    Point test1 {1.2,-2.8}, test2{3,6};
//
//    cout << "첫번째 점: ";
//    test1.print();
//    cout << "두번째 점: ";
//    test2.print();
//    cout << endl;
//
//    swap(&test1, &test2);
//    cout << "swap 함수 실행 후" << endl;
//    cout << "첫번째 점: ";
//    test1.print();
//    cout << "두번째 점: ";
//    test2.print();
//
//}

//#include <iostream>
//using namespace std;
//
//class Box
//{
//private:
//    double length;
//    double width;
//    double height;
//public:
//    static int count;   // Box 객체의 개수(static은 꼭 public에...)
//    Box(double l=2.0, double w=2.0, double h=2.0) : length{l}, width{w}, height{h} {    count++; }
//    ~Box() {
//        count--;
//    }
//
//    // static 멤버 변수 사용 시 -> static 멤버 함수으로 정의해야함
//    static int getCount() { return count;}
//
//    double Volume() {
//        return length * width * height;
//    }
//};
//
//int Box::count =0; // 정적 변수 count 초기화
//int main()
//{
//    Box c1{3.4, 5.5}, c2{4.3, 6.5}, c3{5.3, 6.6};
//
//    cout << "전체 객체 수: " << Box::getCount() << endl;
//}

#include <iostream>
using namespace std;

class Game
{
    string name;
    int stat;
    
public:
    static int count;   // 플레이어 수
    Game(string n="", int s=0) : name{n}, stat{s} { count++; }
    ~Game() { count--; }
    
    // 접근자
    string getName() { return name;}
    int getStat() { return stat;}
    
    // 설정자
    void setName(string n) { name=n; }
    void setStat(int s) { stat=s; }
    
    // 플레이어 수 보여주는 함수
    static int getCount() { return count;}
    
    void print() {
        cout << "플레이어 이름: " << getName() << endl;
        cout << "플레이어 스탯: " << getStat() << endl;
    }
};

int Game::count =0;

int main()
{
    cout << "현재 경기자 수: " << Game::getCount() << endl;
    {
        Game player1 {"kim", 20};
        cout << "현재 경기자 수: " << Game::getCount() << endl;
    }
    Game player2 {"james", 30};
    cout << "현재 경기자 수: " << Game::getCount() << endl;
}
