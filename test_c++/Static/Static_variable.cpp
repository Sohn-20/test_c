//
//  Static_variable.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/07/30.
//

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Circle {
//    int x, y;
//    int radius;
//
//public:
//    static int count; // 정적 변수 -> 일종의 '전역 변수'로 취급
//    // 생성자 호출시 정적 변수 count를 1증가
//    Circle() : x{0}, y{0}, radius{0} {
//        count++;
//    }
//    // 생성자 호출시 정적 변수 count를 1증가
//    Circle(int x, int y, int r) : x{x} , y{y}, radius{r} {
//        count++;
//    }
//    // 소멸자 호출시 정적 변수 count를 1감소
//    ~Circle() {
//        count--;
//    }
//};
//
//int Circle::count =0;
//
//int main()
//{
//    Circle c1;
//    cout << "지금까지 생성된 원의 개수 = " << Circle::count << endl;
//
//    Circle c2(100, 100, 30);
//    cout << "지금까지 생성된 원의 개수 = " << Circle::count << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Circle {
//    int x,y;
//    int radius;
//
//public:
//    static int count;   // 정적 변수
//    Circle() : x{0}, y{0}, radius{0} {
//        count++;
//    }
//    Circle(int x, int y, int r) : x{x}, y{y}, radius{r} {
//        count++;
//    }
//    // 정적 멤버 함수 -> 원의 개수를 알려주는 함수
//    static int getCount() {
//        return count;
//    }
//};
//
//int Circle::count = 0;  // 정적 멤버 변수 초기화
//
//int main()
//{
//    Circle c1;
//    cout << "지금까지 생성된 원의 개수 = " << Circle::getCount() << endl;
//    Circle c2(100, 100, 30);
//    cout << "지금까지 생성된 원의 개수 = " << Circle::getCount() << endl;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Camera
//{
//
//public:
//    static Camera *getInstance();
//
//private:
//    Camera() {}
//    static Camera *instance;
//
//public:
//    void capture() {
//        cout << "사진 촬영이 수행되었음!" << endl;
//    }
//};
//
//Camera* Camera::instance =0;    // 객체 생성을 위한 초기화
//Camera* Camera::getInstance() {
//    if(!instance) {
//        instance = new Camera();
//        cout << "첫 번째 객체가 생성됨" << endl;
//        return instance;
//    }
//    else {
//        cout << "이전 객체를 반환함" << endl;
//        return instance;
//    }
//}
//
//int main()
//{
//    Camera* s1 = Camera::getInstance();
//    Camera* s2 = Camera::getInstance();
//    Camera* s3 = Camera::getInstance();
//    s1->capture();
//
//    return 0;
//}
