//
//  Template1.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/15.
//

//#include <iostream>
//using namespace std;
//
//template <typename T>
//T get_max(T x, T y)
//{
//    if ( x > y) return x;
//    else return y;
//}
//
//int main()
//{
//    // int형 함수 템플릿 get_max() 호출
//    cout << get_max(1, 3) << endl;
//
//    // double 형 get_max() 호출
//    cout << get_max(1.2, 3.9) << endl;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//template<typename T>    // 함수 템플릿으로 정의
//T getArraySum(const T arr[], int n) {
//    T sum = arr[0];
//    for(int i=0; i< n; i++)
//    {
//        sum += arr[i];
//    }
//    return sum;
//}
//
//// 템플릿 특수화
//template<>
//string getArraySum<string>(const string arr[], int n) {
//    string sum = arr[0];
//    for(int i=0; i<n; i++) {
//        sum += ' ' + arr[i];
//    }
//    return sum;
//}
//
//int main() {
//    string sarr[3] = {"hello", "world", "doodle"};
//    string ssum = getArraySum(sarr, 3);
//    cout << ssum << endl;
//}

#include <iostream>
#include <string>
using namespace std;

class Vector2 {
public:
    Vector2() : x(0), y(0) {}
    Vector2(float x, float y) : x(x), y(y) {}
    float getX() const { return x; }
    float getY() const { return y; }
    
    Vector2 &operator+=(const Vector2 &rhs) {
        x += rhs.x;
        y += rhs.y;
        return *this;
    }
    
private:
    float x, y;
};

template<typename T>
T getArraySum(const T arr[], int n) {
    T sum = arr[0];
    for(int i =1; i <n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[5] = {3, 1, 4, 1, 5};
    float farr[5] = {3.1, 1.2, 4.3, 1.4, 5.5 };
    float sum = getArraySum(farr, 5);
    Vector2 varr[3] = { Vector2(1,2), Vector2(3, 4), Vector2(5,6)};
    string sarr[3] = { "hello", "world", "doodle"};
    
    int     isum = getArraySum<int>(arr, 5);
    float   fsum = getArraySum<float>(farr, 5);
    Vector2 vsum = getArraySum<Vector2>(varr, 5);
    string  ssum = getArraySum(sarr, 3);
    
    cout << "배열들의 합: " << isum << endl;
    cout << "배열들의 합: " << fsum << endl;
    cout << vsum.getX() << ", " << vsum.getY() << endl;
    cout << ssum << endl;
    cout << sum << endl;
    
    return 0;
}
