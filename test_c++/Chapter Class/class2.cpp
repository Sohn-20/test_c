//
//  class2.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/07/25.
//  접근자, 설정자, 생성자 공부 내용

//#include <iostream>
//using namespace std;
//
//class Complex
//{
//    double r;
//    double i;
//
//public:
//    Complex() {
//        r=0;
//        i=0;
//    }
//
//    Complex(double _r, double _i) : r{_r}, i{_i} {}
//
//    // 접근자
//    double getR() { return r; }
//    double getI() { return i; }
//
//    // 설정자
//    void setR(double _r) { r=_r; }
//    void setI(double _i) { i=_i; }
//
//    void print();
//};
//
//void Complex::print() {
//    cout << getR() << '+' << getI() << 'i';
//}
//
//Complex add(Complex a, Complex b);
//
//int main()
//{
//    Complex m1(5,3), m2(3,4);
//
//    printf("(%.0f + %.0fi) + (%.0f - %.0fi)=(%.0f - %.0fi)",
//           m1.getR(), m1.getI(),m2.getR(), m2.getR(),add(m1, m2).getR(), add(m1, m2).getI());
//
//    return 0;
//}
//
//Complex add(Complex a, Complex b)
//{
//    Complex c(a.getR() + b.getR(), a.getI() + b.getI());
//
//    return c;
//}

//#include <iostream>
//using namespace std;
//
//class Box
//{
//    int length, width, height;
//
//public:
//    // 생성자
//    Box() : length{0}, width{0}, height{0} {}
//    Box(int l, int w, int h) : length{l}, width{w}, height{h} {}
//
//    // 접근자
//    int getLength() { return length; }
//    int getWidth() { return width; }
//    int getHeight() { return height; }
//
//    // 생성자
//    void setLength(int l) { length=l; }
//    void setWidth(int w) { width=w; }
//    void setHeight(int h) { height=h; }
//
//    // 박스가 비어있는지 확인하는 함수
//    void empty();
//    void print();
//    double getVolume() {
//        return length*width*height;
//    }
//
//};

//void Box::empty() {
//    if(length == 0 && width == 0 && height == 0)
//        cout << "박스가 비어있습니다." << endl;
//}
//
//void Box::print() {
//    cout << "상자의 길이: " << getLength() << endl;
//    cout << "상자의 너비: " << getWidth() << endl;
//    cout << "상자의 높이: " << getHeight() << endl;
//    cout << "상자의 부피: " << getVolume() << endl;
//}
//
//int main()
//{
//    Box b1, b2;
//
//    cout << "상자 #1" << endl;
//    b1.empty();
//    b1.print();
//    cout << endl;
//
//    cout << "상자 #2" << endl;
//    b2.setWidth(2); b2.setLength(3); b2.setHeight(4);
//    b2.empty();
//    b2.print();
//}

//#include <iostream>
//using namespace std;
//
//class SMS{
//    string sender;  // 송신자의 전화번호
//    string receiver;    // 수신자의 전화번호
//    string text;    // 메시지 텍스트
//
//public:
//    SMS(string s="", string r="", string t="") : sender{s}, receiver{r}, text{t} {}
//
//    // 접근자
//    string getSender() {return  sender;}
//    string getReceiver() {return receiver;}
//    string getText() { return text;}
//
//    // 생성자
//    void setSender(string s) { sender=s;}
//    void setReceiver(string r) { receiver=r;}
//    void setText(string t) { text=t;}
//
//    void print();
//};

//void SMS::print()
//{
//    cout << "발신자: " << getSender() << " ";
//    cout << "수신자: " << getReceiver() << " ";
//    cout << "내용: " << getText() << " " << endl;
//}
//
//int main() {
//    SMS link1("010-1234-5678","010-1234-5679");
//
//    while(true)
//    {
//        string massage;
//        cout << "메시지를 입력해주세요. (종료는 exit)" << endl;
//        getline(cin, massage);
//
//        if(massage == "" || massage == "exit") break;
//        link1.setText(massage);
//        link1.print();
//    }
//
//    return 0;
//
//}

//#include <iostream>
//using namespace std;
//
//class Charactor
//{
//    int x,y;
//    double HP;
//
//public:
//    Charactor(int px=0, int py=0, double pHP=100) : x{px}, y{py}, HP{pHP} {}
//
//    // 접근자
//    int getX() {return x;}
//    int getY() {return y;}
//    double getHp() {return HP;}
//
//    // 설정자
//    void setX(int px) {x=px;}
//    void setY(int py) {y=py;}
//    void setHp(double pHP) {HP=pHP;}
//
//    void print();
//};
//
//void Charactor::print() {
//    cout << "x: " << getX() << " " << "y: " << getY() << " " << getHp() << endl;
//}
//
//int main() {
//    Charactor p1;
//
//    cout << "캐릭터 #1" << endl;
//    for(int i=0; i <= 90; i+=10)
//    {
//        p1.setX(i);
//        p1.print();
//    }
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Date
//{
//    int year, month, day;
//
//public:
//    Date() {
//        year = 2020;
//        month =0;
//        day=0;
//    }
//
//    Date(int y, int m, int d) : year{y}, month{m}, day{d} {}
//
//    // 접근자
//    int getYear() {return year;}
//    int getMonth(){ return month;}
//    int getDay() {return day;}
//
//    // 설정자
//    void setYear(int y) {year=y;}
//    void setMonth(int m) {month=m;}
//    void setDay(int d) {day=d;}
//
//    void print();
//    bool isLeapYear();
//    Date nextMonth();
//};
//
//bool Date::isLeapYear()
//{
//    if(getYear() % 4 == 0 || getYear()%100 == 0 || getYear()%400== 0)
//    {
//        cout << "윤년입니다." << endl;
//        return true;
//    }
//    cout << "윤년이 아닙니다." << endl;
//    return false;
//}
//
//Date Date::nextMonth()
//{
//    Date c1(year, ++month, day);
//
//    return c1;
//}
//
//void Date::print() {
//    cout << year << ',' << month << ',' << day << endl;
//}
//
//int main() {
//    Date recent(2017,9,1);
//
//    recent.print();
//    Date nextMonth = recent.nextMonth();
//    nextMonth.print();
//
//    recent.setYear(2020);
//    recent.isLeapYear();
//
//    return 0;
//
//}

// 생성자, 소멸자
#include <iostream>

using namespace std;

class MyClass {
public:
    MyClass() { // 생성자
        cout << "생성자가 호출되었다!!" << endl;
    }
    ~MyClass() {
        cout << "소멸자가 호출되었다!!" << endl;
    }
};

//MyClass globalObj;
void testLocalObj() {
    cout << "testLocalObj함수 시작!!" << endl;
    MyClass localObj;
    cout << "testLocalObj함수 끝!!" << endl;
}

int main() {
    cout << "main함수 시작!!" << endl;
    testLocalObj();
    cout << "main함수 끝!!" << endl;
    
}
