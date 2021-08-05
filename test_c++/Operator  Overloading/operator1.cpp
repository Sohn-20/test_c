//
//  operator1.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/07/31.
//

// + Operator Overloading
//#include <iostream>
//#include <string>
//using namespace std;
//
//class MyVector
//{
//private:
//    double x,y;
//
//public:
//    MyVector(double x=0.0, double y=0.0) : x{x}, y{y} { }
//    string toString() {
//        return "("+to_string(x)+ ", " + to_string(y)+ ")";
//    }
//    MyVector operator+(const MyVector& v2); // + 연산자 중복 선언
//
//};

// + 연산자 중복(operator overloading) 구현 -> 연산자 +를 대체하는 함수
//MyVector MyVector::operator+(const MyVector &v2)
//{
//    MyVector v;
//    v.x = this->x + v2.x;
//    v.y = this->y + v2.y;
//    return v;
//}
//
//int main()
//{
//    MyVector v1(1.0, 2.0), v2(3.0, 4.0);
//    MyVector v3 = v1 + v2;
//
//    cout << v1.toString() << "+" << v2.toString() << "=" << v3.toString() << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Time
//{
//    int hour, min, sec;
//
//public:
//    Time(int h=0, int m=0, int s=0) : hour(h), min(m), sec(s) { }
//
//    bool operator==(Time &t2) {
//        return (hour == t2.hour &&
//                min == t2.min &&
//                sec == t2.sec);
//    }
//
//    bool operator!=(Time &t2) {
//        return (hour != t2.hour &&
//                min != t2.min &&
//                sec != t2.sec);
//    }
//};
//
//int main()
//{
//    Time t1(1, 2, 3), t2(1, 2, 3);
//
//    // 참과 거짓을 1, 0이 아니라 true, false로 출력하도록 설정
//    cout.setf(cout.boolalpha);
//    cout << (t1 == t2) << endl;
//    cout << (t1 != t2) << endl;
//    return 0;
//}

#include <iostream>
using namespace std;

class Counter
{
private:
    int value;
    
public:
    Counter() : value{0} { };
    Counter(int v) : value{v} { };
    ~Counter() {};
    
    // 접근자
    int getValue() const { return value; } // 함수의 반환값이 const
    // 설정자
    void setValue(int x) { value = x; }
    
    // ++ operator 정의
    Counter& operator++()
    {
        ++value;
        // this: 자기를 가리키는 포인터 -> *this: this 포인터가 가리키는 값(객체 자신)
        return *this; // ++(++c); 수식도 가능해야 하기에 *this로 반환한다.
    }
    
    const Counter operator++(int i)
    {
        Counter temp={*this};   // 현재의 상태를 저장
        ++value;
        return temp;
    }
    
    Counter& operator--()
    {
        --value;
        return *this;
    }
    
    Counter operator--(int i)
    {
        Counter temp = (*this); // 현재의 상태를 저장
        --value;
        return temp;
    }
    
};

int main()
{
    Counter c;
    cout << "카운터의 값: " << c.getValue() << endl;
    ++c;
    c++;
    --c;
    c--;
    cout << "카운터의 값: " << c.getValue() << endl;
}
