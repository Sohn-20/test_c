//
//  operator_ex.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/01.
//

//#include <iostream>
//using namespace std;
//
//class Counter
//{
//    int count;
//public:
//    Counter() { count =0; }
//    Counter(int value) : count{value} { }
//    Counter& operator++()
//    {
//        count++;
//        return *this;
//    }
//
//    Counter& operator++(int)
//    {
//        Counter temp = (*this);
//        count++;
//        return temp;
//    }
//
//    Counter& operator--()
//    {
//        count--;
//        return *this;
//    }
//
//    Counter& operator--(int)
//    {
//        Counter temp = (*this);
//        count--;
//        return temp;
//    }
//
//    void print()
//    {
//        cout << count << endl;
//    }
//};
//
//int main()
//{
//    Counter c(10);
//    ++c;
//    --c;
//    c++;
//    c--;
//    c.print();
//    return 0;
//}

#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;
    
public:
    static int count;
    Box(double l=0, double w=0, double h=0) : length{l}, width{w}, height{h} { count++; }
    ~Box() { count--; }
    
    double const getVolume(void) const {
        return length * width * height;
    }
    
    Box operator+(const Box& box);  // + 연산자 중복 선언
    Box operator-(const Box& box);  // - 연산자 중복 선언
    
    // == 연산자 중복 정의
    bool operator==(Box &box)
    {
        return (getVolume() == box.getVolume());
    }
    
    // != 연산자 중복 정의
    bool operator!=(Box &box)
    {
        return (getVolume() != box.getVolume());
    }
    
    // ++ 연산자 중복 정의
    Box& operator++()
    {
        ++length;  ++width;  ++height;
        return *this;
    }
    
    // ++ 후위 연산자 중복 정의
    Box& operator++(int)
    {
        Box temp = (*this);
        ++length;  ++width;  ++height;
        return temp;
    }
    
    // -- 연산자 중복 정의
    Box& operator--()
    {
        --length;  --width;  --height;
        return *this;
    }
    
    
    // -- 후위 연산자 중복 정의
    Box& operator--(int)
    {
        Box temp = (*this);
        --length;  --width;  --height;
        return temp;
    }
    
    // 대입 연산자 중복 정의
    Box& operator=(const Box& box)
    {
        this->length = box.length;
        this->width = box.width;
        this->height = box.height;
        return *this;
    }
    
    bool operator<(Box& box)
    {
        if(this->getVolume() < box.getVolume())
            return true;
        return false;
    }
    
    // 출력 연산자 중복
    friend ostream& operator<<(ostream& os, const Box& box)
    {
        os << "상자 #" << count << endl
        << "상자의 길이: " << box.length << endl
        << "상자의 너비: " << box.width << endl
        << "상자의 높이: " << box.height << endl
        << "상자의 부피: " << box.getVolume() << endl;
        return os;
    }
    
//    void printBox()
//    {
//        cout << "상자의 길이:" << length << endl;
//        cout << " 상자의 너비: " << width << endl;
//        cout << " 상자의 높이: " << height << endl;
//        cout << " 상자의 부피: " << getVolume() << endl;
//    }
};

int Box::count =0;

Box Box::operator+(const Box &box)
{
    Box v;
    v.length = this->length + box.length;
    v.height = this->height + box.height;
    v.width = this->width + box.width;
    return v;
}

Box Box::operator-(const Box &box)
{
    Box v;
    v.length = this->length - box.length;
    v.height = this->height - box.height;
    v.width = this->width - box.width;
    return v;
}

int main()
{
    Box a(10,10,10);
    cout << a << endl;
    Box b(20,20,20);
    cout << b << endl;
    Box c;
    c = a+b;
    cout << c << endl;
//    c.printBox();
    
    cout.setf(cout.boolalpha);
    cout << (a == b) << endl;
    cout << "a < b 이면 " << (a < b) << endl;
}
