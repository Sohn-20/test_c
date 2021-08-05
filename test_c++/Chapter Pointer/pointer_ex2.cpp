//
//  pointer_ex2.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/07/28.
//

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int num;    // 사용자가 입력받을 이름 개수
//    cout << "저장할 이름의 개수를 입력하시오: ";
//    cin >> num;
//
//    string *list = new string[num];
//    for(int i=0; i<num; i++)
//    {
//        string names;
//        cout << "이름 입력 # " << i+1 << ": ";
//        cin >> names;
//        list[i] = names;
//    }
//
//    for(int i=0; i<num; i++)
//    {
//        cout << "이름 #" << i+1 << ": " << list[i] << endl;
//    }
//}

//#include <iostream>
//#include <memory>
//#include <time.h>
//using namespace std;
//
//class Circle
//{
//    int radius; // 원의 반지름 값
//
//public:
//    // 생성자, 소멸자
//    Circle(int r=0) : radius(r) {}
//    ~Circle() {}
//
//    // 접근자
//    int getRadius() {return radius;}
//    // 설정자
//    void setRadius(int r) { radius=r; }
//
//    // 원의 면적
//    double getArea() {
//        return getRadius()*getRadius();
//    }
//
//    void print();
//};
//
//void Circle::print() {
//    cout << "원의 반지름: " << getRadius() << endl;
//    cout << "원의 면적: " << getArea() << endl;
//}
//
//int main()
//{
//    int circle_num;
//    cout << "원의 개수: ";
//    cin >> circle_num;
//
//    // 난수 초기화
//    srand(time(0));
//    int circle_area_num=0; // 면적이 100보다 큰 원의를 저장하는 개수 변수
//
//    Circle *r = new Circle[circle_num];
//    for(int i=0; i< circle_num; i++)
//    {
//        r[i].setRadius(rand()%100);
//        cout << "원" << i << "의 반지름 >>" << r[i].getRadius() << endl;
//        if(r->getArea() > 100)
//        {
//            circle_area_num++;
//        }
//    }
//
//    cout << "면적이 100보다 큰 원은 " << circle_area_num << "개 입니다.";
//}

//#include <iostream>
//#include <memory>
//using namespace std;
//
//class Time
//{
//    int hour, min, sec;
//
//public:
//    Time(int h=0, int m=0, int s=0) : hour(h), min(m), sec(s) {}
//    ~Time() {}
//
//    // 접근자
//    int getHour() {return hour; }
//    int getMin() {return min; }
//    int getSec() {return sec; }
//
//    // 설정자
//    void setHour(int h) {hour=h;}
//    void setMin(int m) {min = m;}
//    void setSec(int s) {sec = s;}
//
//    void print();
//};
//
//void Time::print()
//{
//    cout << getHour() << ":" << getMin() << ":" << getSec() << endl;
//}
//
//bool isEqual(Time& t1, Time& t2);
//
//int main()
//{
//    Time *p1 = new Time[2];
//
//    for(int i=0; i<2; i++)
//    {
//        p1[i].setHour(12);
//        p1[i].setMin(11);
//        p1[i].setSec(33);
//
//        p1[i].print();
//    }
//
//
//    if(isEqual(p1[0], p1[1]))
//    {
//        cout << "시간이 일치합니다." << endl;
//    }
//
//    delete[] p1;
//    return 0;
//}
//
//bool isEqual(Time& t1, Time& t2)
//{
//    return ((t1.getHour() == t2.getHour()) && (t1.getMin() == t2.getMin()) && (t1.getSec() == t2.getSec()) );
//}

//#include <iostream>
//#include <memory>
//#include <vector>
//using namespace std;
//
//class Student
//{
//    string name;
//
//public:
//    Student(string n ="") : name(n) {}
//
//    // 접근자
//    string getName() {return name;}
//    // 설정자
//    void setName(string n) {this->name=n;}
//
//};
//
//class MyClass {
//    string className;
//    Student* p;
//    int size;
//
//    // 접근자
//    string getClassName() {return className;}
//    int getSize() {return size;}
//
//    // 설정자
//    void setClassName(string c) {className = c;}
//    void setStudent(Student* s) {p=s;}
//    void setSize(int s) {size = s;}
//
//    void print();
//};
//
//void MyClass::print()
//{
//
//}
//
//int main()
//{
//    vector<MyClass> special;
//
//}

#include <iostream>
using namespace std;

int main() {
    int *a = new int(8);
    int *b = new int(10);
    
    a = b; // 얕은 복사
    cout << "a: " << a << "b: " << b << endl;
    *a = *b; // 깊은 복사
    cout << "a: " << *a << "b: " << *b << endl;
    
    delete a;
    delete b;
}
