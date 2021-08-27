//
//  functor.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/19.
//

//#include <iostream>
//using namespace std;
//
//class Equals {
//public:
//    Equals(int value) : value(value) { }
//    // 함수 호출할 때 쓰는 연산자 오버로딩 -> f.operator(매개변수)
//    bool operator()(int x) const {
//        return x == value;
//    }
//
//private:
//    int value;
//};
//
//int main()
//{
//    Equals eq(123);
//    cout << eq(12) << endl;
//    cout << eq(123) << endl;
//}

#include <iostream>
using namespace std;

class Square {
public:
    int operator()(int n) { return n * n; }
} square;

class MyFunc {
public:
    int operator()(int n) { return n * (n - 15) / 2; }
} myFunc;

template<typename T>
int arrFnMin(const int arr[], int n, T f) {
    int min = f(arr[0]);
    for (int i =0; i < n; i++) {
        if(f(arr[i]) < min) {
            min = f(arr[i]);
        }
    }
    return min;
}

int main() {
    int arr[7] = { 3, 1, 4, 1, 5, 9, -2};
    cout << arrFnMin<Square>(arr, 7, square) << endl;
    cout << arrFnMin<MyFunc>(arr, 7, myFunc) << endl;
}
