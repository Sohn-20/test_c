//
//  Template2.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/16.
//

//#include <iostream>
//using namespace std;
//
//template <typename T>
//void swap_values(T& x, T& y)
//{
//    T temp;
//    temp = x;
//    x = y;
//    y = temp;
//}
//
//void swap_values(char* s1, char* s2)
//{
//    int len;
//
//    len = (strlen(s1) >= strlen(s2) ? strlen(s1) : strlen(s2));
//    char* tmp = new char[len + 1];
//
//    strcpy(tmp, s1);
//    strcpy(s1, s2);
//    strcpy(s2, tmp);
//    delete[] tmp;
//}
//
//int main()
//{
//    int x = 100, y = 200;
//    swap_values(x, y);  // x, y가 모두 int 타입으로 함수 템플릿 사용
//    cout << x << " " << y << endl;
//
//    char s1[100] = "This is a first string";
//    char s2[100] = "This is a second string";
//    swap_values(s1, s2);    // s1, s2가 모두 배열 -> 중복 정의된 함수 호출
//    cout << s1 << " " << s2 << endl;
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//template<typename T>
//class Box {
//    T data; // T: 타입(type)
//
//public:
//    Box() { }
//    void set(T value) {
//        data = value;
//    }
//
//    T get() { return data; }
//};
//
//int main()
//{
//    Box<int> box;
//    box.set(100);
//    cout << box.get() << endl;
//
//    Box<double> box1;
//    box1.set(3.141592);
//    cout << box1.get() << endl;
//
//    return 0;
//}

// 비타입 파라미터
#include <iostream>
using namespace std;

template<typename T>
class Vector {
public:
    Vector(int n) {
        this->n = n;
        comp = new T[n];
    }
    ~Vector() {
        delete [] comp;
    }
    
    T getComp(int i) {  // i번째 성분을 리턴
        return comp[i];
    }
    
    void setComp(int i, T val) {
        comp[i] = val;
    }
    
private:
    int n;      // 벡터의 차원
    T *comp;    // 벡터의 성분
};

int main() {
    Vector<float> v(3);
    v.setComp(0, 2);
    v.setComp(1, 3);
    v.setComp(2, 4);
    
    cout << v.getComp(0) << ", " << v.getComp(1) << ", " << v.getComp(2) << endl;
}
