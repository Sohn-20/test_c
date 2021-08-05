//
//  pointer1.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/07/26.
//

// 스마트 포인터
//#include <iostream>
//#include <memory>
//using namespace std;
//
//class Circle
//{
//    int radius;
//
//public:
//    Circle() : radius(10) {}
//    ~Circle() {}
//
//    void setRadius(int radius) {this->radius=radius;}
//    int getRadius() const {return radius; }
//};
//
//int main()
//{
//    Circle* p= new Circle();
//    const Circle *pConstObj = new Circle();
//    Circle *const pConstPtr = new Circle();
//
//    cout << "pRect->radius: " << p->getRadius() << endl;
//    cout << "pConstObj->radius: " << pConstObj->getRadius() << endl;
//    cout << "pConstPtr->radius: " << pConstPtr->getRadius() << endl << endl;
//
//    p->setRadius(30);
//    pConstObj->setRadius(30);
//    pConstPtr->setRadius(30);
//
//    cout << "pRect->radius: " << p->getRadius() << endl;
//    cout << "pConstObj->radius: " << pConstObj->getRadius() << endl;
//    cout << "pConstPtr->radius: " << pConstPtr->getRadius() << endl;
//    return 0;
//}

//int main() {
//    unique_ptr<int[]> buf(new int[10]);
//
//    for(int i=0; i<10; i++) {
//        buf[i] = i;
//    }
//
//    for(int i=0; i<10; i++)
//    {
//        cout << buf[i] << " ";
//    }
//    cout << endl;
//    return 0;
//}


// 동적 객체 생성
//#include <iostream>
//using namespace std;
//
//class Dog {
//    string name;
//    int age;
//
//public:
//    Dog() {
//        cout << "생성자 호출\n";
//        age = 1;
//        name = "바둑이";
//    }
//
//    ~Dog() {
//        cout << "소멸자 호출\n";
//    }
//};
//
//int main() {
//    Dog * pDog = new Dog;
//    delete pDog;
//
//    return 0;
//}

#include <iostream>
#include <memory>
using namespace std;
class Student
{
    string name;    // 학생 이름
    string telephone;   // 휴대폰 번호
    
public:
    Student(const string n="",const string t=""):name(n), telephone(t) {}
    
    string getName() {return name;}
    string getTelephone() {return telephone;}
    void setName(string name) {name=name;}
    void setTelephone(string tel) {telephone=tel;}
    
    void print()
    {
        cout << "학생 이름: " << getName() << endl;
        cout << "학생 핸드폰 번호: " << getTelephone();
    }
};

class Lab
{
    string name;    // 연구실 이름
//    bool hasChief;  // 실장 존재 여부 표시
    Student *chief; // 실장
public:
    Lab(string n= ""): name(n), chief(nullptr) {}
    void setCheif(Student *p) { chief = p; }
    void print() const {
        cout << name << "연구실" << endl;
        if(chief != nullptr)
            cout << "실장은 " << chief->getName() << endl;
        else
            cout << "실장은 현재 없습니다." << endl;
    }
};

int main()
{
    Lab lab("영상 처리");
    Student *p = new Student("김철수", "011-123-5678");
    lab.setCheif(p);
    lab.print();
    
    delete p;
    return 0;
}
