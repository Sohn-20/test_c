//
//  operator2.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/07/31.
//

//#include <iostream>
//using namespace std;
//
//class Box
//{
//private:
//    double length, width, height;
//public:
//    Box(double l=0.0, double w=0.0, double h=0.0) : length{l}, width{w}, height{h} { }
//
//    void display() {
//        cout <<"(" << length << ", " << width << ", " << height << ")" << endl;
//    }
//
//    // 기본 복사 생성자 구현
//    Box& operator=(const Box& b2)
//    {
//        this->length = b2.length;
//        this->width = b2.width;
//        this->height = b2.height;
//        return *this;
//    }
//};
//
//int main()
//{
//    Box b1(30.0, 30.0, 60.0), b2;
//    b1.display();
//
//    b2 = b1;
//    b1.display();
//    return 0;
//}

//#include <iostream>
//using namespace std;
//const int SIZE = 10;    // 배열 크기
//
//class MyArray {
//private:
//    int a[SIZE];
//
//public:
//    MyArray() {
//        // 배열의 각 원소들의 value를 0으로 초기화
//        for(int i=0; i < SIZE; i++)
//            a[i] = 0;
//    }
//
//    // 매개변수 int i는 배열의 인덱스값
//    int &operator[](int i) {
//        if( i >= SIZE) {
//            cout << "잘못된 인덱스:";
//            return a[0];
//        }
//        return a[i];
//    }
//};
//
//int main() {
//    MyArray A;
//
//    A[3] = 9;
//    cout << "A[3]= " << A[3] << endl;
//    cout << "A[16]= " << A[16] << endl;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Pointer {
//    int *p;
//public:
//    Pointer(int *p) : p{p} { }
//    ~Pointer() { delete p;}
//
//    int* operator->() const {   return p; }
//    int& operator*() const { return *p; }
//};
//
//int main()
//{
//    Pointer p(new int);
//
////    * 연산자 중복 사용
//    *p = 100;
//    cout << *p << endl;
//
//    // * 연산자 중복으로 인해 delete p;가 없어도 자동으로 실행(소멸자)
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Box {
//    double length, width, height;
//public:
//    Box(double l, double w, double h) : length{l}, width{w}, height{h} { }
//
//    friend void printBox(Box box); // 프렌드 선언
//};
//
//// 프렌드 함수 정의(구현)
//void printBox(Box box) {
//    cout << "Box( " << box.length << ", " << box.width << ", " << box.height << ") " << endl;
//}
//
//int main() {
//    Box box(10, 20, 30);
//    printBox(box);
//
//    return 0;
//}

