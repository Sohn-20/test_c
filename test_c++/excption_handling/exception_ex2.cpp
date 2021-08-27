//
//  exception_ex2.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/17.
//

//#include <iostream>
//using namespace std;
//
//template <typename T>
//T getSmallest(T *arr, int n) {
//    int index =0;
//    double min = arr[0];
//    for (int i=1; i < n; i++) {
//        if(arr[index] > arr[i])
//        {
//            index = i;
//            min = arr[i];
//        }
//    }
//    return min;
//}
//
//template <typename U>
//U getAverage(U *arr, int n) {
//    U avg=0;
//    U sum=0;  // 배열 원소의 총합
//    for (int i=0; i < n; i++) {
//        sum += arr[i];
//    }
//
//    avg = sum / n;
//    return avg;
//}
//
//template <typename B>
//B isEqul(B *arr1, B *arr2, int n)
//{
//    for(int i =0; i < n; i++)
//    {
//        if(arr1[i] == arr2[i])
//            return true;
//    }
//    return false;
//}
//
//int main() {
//    double list[] = { 1.2, 3.3, 9.0, 1.5, 8.7};
//    // 배열 길이 변수
//    int array_length = sizeof(list)/sizeof(double);
//
//    double list1[] = { 1.2, 3.3, 9.0, 1.5, 8.7 };
//    double list2[] = { 1.2, 3.3, 9.0, 1.5, 8.7 };
//    bool check = isEqul(list1, list2, array_length);
//
//    cout << boolalpha;
//    cout << check << endl;
//
//    cout << "최소값: " << getSmallest(list,array_length) << endl;
//
//    cout << "평균값: " << getAverage(list,array_length) << endl;
//
//    return 0;
//}

#include <iostream>
using namespace std;

template <typename T>
class Circle
{
    T x;
    T y;
    T radius;
    
public:
    Circle<T>(T x, T y, T r) : x{x}, y{y}, radius{r} { }
    ~Circle() { }
    
    T getX() { return x;}
    T getY() { return y;}
    T getRadius() {return radius;}
    
    void setX(T x) { x = x;}
    void setY(T y) { y = y;}
    void setRadius(T r) {radius =r; }
    
    T area();
};

template <typename U>
U Circle<U>::area() {
    return getRadius() * getRadius() * 3.14;
}

int main() {
    Circle<double> circleA(0.0, 0.0, 10.0);
    Circle<int> circleB(1,2, 5);
    
    cout << "면적: " << circleA.area() << endl;
    cout << "면적: " << circleB.area() << endl;
    return 0;
}
