//
//  C_constructor1.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/07/29.
//

//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//    int age;
//    Person(int a) : age{a} {}
//};
//
//int main()
//{
//    Person kim{21};
//    Person clone{ kim };    // (default)복사 생성자 호출
//
//    cout << "kim의 나이: " << kim.age << " clone의 나이: " << clone.age << endl;
//
//    kim.age =23;
//
//    cout << "kim의 나이: " << kim.age << " clone의 나이: " << clone.age << endl;
//    return 0;
//}

// 얕은 복사(shallow copy)
//#include <iostream>
//using namespace std;
//
//class MyArray {
//public:
//    int size;
//    int* data;
//
//    MyArray(int size)
//    {
//        this->size =size;
//        data = new int[size];
//    }
//
//    ~MyArray()
//    {
//        if(data != NULL) delete[] this->data;
//    }
//};
//
//int main()
//{
//    MyArray buffer(10);
//    buffer.data[0] = 1;
//    {
//        (call by value로 buffer 객체의 모든 값(즉 주소값)도 복사 해왔으므로 스코프 밖으로 호출된 이후 소멸자가 작동하여 clone을 삭제 -> buffer의 동적 할당도 해제된다.
//        MyArray clone = buffer; // 기본 복사 생성자 호출
//    }
//    buffer.data[0] = 2;
//
//    return 0;
//}

/* 깊은 복사(deep copy) */
//#include <iostream>
//using namespace std;
//
//class MyArray {
//public:
//    int size;
//    int* data;
//    MyArray(int size);
//    MyArray(const MyArray& other);  // 사용자 정의 복사 생성자
//    ~MyArray();
//};
//
//MyArray::MyArray(int size)
//{
//    this->size=size;
//    data = new int[size];
//}
//
//// 사용자 정의 복사 생성자 구현
//MyArray::MyArray(const MyArray& other)
//{
//    this->size = other.size;
//    this->data = new int[other.size];
//    for(int i=0; i < size; i++)
//        this->data[i] = other.data[i];
//}
//
//MyArray::~MyArray()
//{
//    if( data != nullptr) delete [] this->data;
//    data = nullptr;
//}
//
//int main()
//{
//    MyArray buffer(10);
//    buffer.data[0] = 1;
//    cout << "buffer 객체의 data 멤버 변수의 0번째 인자: " << buffer.data[0] << endl;
//    {
//        MyArray clone = buffer;
//        cout << "clone 객체의 data 멤버 변수의 0번째 인자: " << clone.data[0] << endl;
//    }
//    buffer.data[0] = 2;
//    cout << "buffer 객체의 data 멤버 변수의 0번째 인자: " << buffer.data[0] << endl;
//
//    return 0;
//}

/* 객체의 대입 연산자 적용 */
//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//    int age;
//    Person(int a) : age(a) { }
//};
//
//int main()
//{
//    Person obj1(20);
//    Person obj2(10);
//
//    obj2 = obj1;    // obj1의 멤버 변수가 obj2로 복사된다. -> 얕은 복사(shallow copy)
//    cout << "객체 obj1의 멤버 변수 age값: " << obj1.age << endl;
//    cout << "객체 obj2의 멤버 변수 age값: " << obj2.age << endl;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Person
//{
//
//public:
//    int age;
//    Person(int a) : age(a) { }
//
//};
//
//int main()
//{
//    Person obj1(20);
//    Person obj2(20);
//
//    // Myperson 클래스에서 == 연산자를 정의 x -> 연산자 중복(operator overloading)으로 해결
//    if(obj1 == obj2) {
//        cout << "같습니다." << endl;
//    }
//    else {
//        cout << "다릅니다." << endl;
//    }
//
//    return 0;
//}



