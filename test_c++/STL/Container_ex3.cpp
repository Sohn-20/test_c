//
//  test.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/26.
//

#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
using namespace std;

class Student {
    string name;
    string address;
    int pin;    // 학번
    string phone;

public:
    Student(string n="", string a="", int p=0, string phone="") :
    name{n}, address{a}, pin{p}, phone{phone} { }
    ~Student() { }

    string getName() { return name;}
    string getAddress() { return address;}
    int getPin() { return pin;}
    string getPhone() { return phone;}

    void setName(string n) { name = n;}
    void setAddress(string a) { address = a;}
    void setPin(int p) { pin= p;}
    void setPhone(string p) { phone = p;}

    void print();
    
    // find 함수 사용 시 인자로 이름을 넣는 곳에 필요한 연산자 중복
    bool operator==(const Student& t) { return (this->getName() == t.name);}

};

void Student::print() {
    cout << "이름: " << getName() << endl;
    cout << "주소: " << getAddress() << endl;
    cout << "학번: " << getPin() << endl;
    cout << "전화번호: " << getPhone() << endl;
}

// 함수 원형
void repeat(char);
void printGuide();
Student addOne(Student*);

int main(){
    list<Student> group1;
    int order;  // 사용자가 선택하는 기능 번호
    auto it = group1.begin();   // 반복자

    try {
        while (true) {
            printGuide();
            cin >> order;
            switch (order) {
                case 1:
                {
                    Student add;
                    addOne(&add);
                    group1.insert(it++, add);
                    break;
                }

                case 2: {
                    string name; // 찾고자하는 이름
                    cout << "찾으시는 이름: ";
                    cin >> name;
                    Student s;
                    s.setName(name);

                    auto it = find(group1.begin(), group1.end(), s);
                    
                    // 반복자가 존재하는 경우
                    if(it != group1.end())
                        it->print();
                    
                    else
                    {
                        cout << "찾으시는 대상이 없습니다." << endl;
                    }
                    break;
                }

                case 3:
                {
                    string name;
                    cout << "삭제하실 이름: ";
                    cin >> name;
                    Student s;
                    s.setName(name);

                    auto it = find(group1.begin(), group1.end(), s);
                    
                    // 반복자가 존재하는 경우
                    if(it != group1.end())
                        group1.erase(it);
                    
                    else
                        cout << "삭제할 대상이 없습니다." << endl;
                    break;
                }

                case 4:
                    for(auto& n : group1)
                        n.print();
                    break;

                default:
                    // 종료하는 기능
                    int exit=0;
                    throw exit;
                    break;
            }
        }
    }

    catch (int exit) {
        cout << "프로그램 종료" << endl;
    }

}


void printGuide()
{
    char line = '=';
    repeat(line);
    cout << "추가 : 1, 검색: 2, 삭제: 3, 모두보기: 4, 종료: 5" << endl;
    repeat(line);
}

// '='라인 반복하는 함수
void repeat(char line) {
    for(int i=0; i < 10; i++)
    {
        cout << line;
    }
    cout << endl;
}

// 이름, 주소, 전화번호, 학번을 추가하는 기능을 사용할 때 이용하는 함수
Student addOne(Student* parm)
{
    // 이름, 주소, 전화번호
    string name, address, phone;
    int pin;    // 학번

    cout << "이름: ";
    cin >> name;

    cout << "주소: ";
    cin >> address;

    cout << "학번: ";
    cin >> pin;

    cout << "전화번호: ";
    cin >> phone;

    parm->setName(name);
    parm->setAddress(address);
    parm->setPin(pin);
    parm->setPhone(phone);

    cout << "추가되었습니다." << endl;

    return *parm;
}

//class Test
//{
//public:
//    Test() : value(0) { }
//    Test(int v) : value{v} { }
//    virtual ~Test() { }
//
//    bool operator==(const Test& t) { return (this->value == t.value);}
//
//    int value;
//};
//
//int main() {
//    vector<Test> t;
//    Test a(1);
//    Test b(2);
//    Test c(3);
//    t.push_back(a);
//    t.push_back(b);
//    t.push_back(c);
//
//    Test com(3);
//    vector<Test>::iterator it;
//    it = find(t.begin(), t.end(), com);
//    if(t.end() != it)
//    {
//        cout << "find = " <<  it->value << endl;
//    }
//
//    return 0;
//}
