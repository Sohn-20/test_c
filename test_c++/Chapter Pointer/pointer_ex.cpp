//
//  pointer_ex.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/07/26.
//

/* 사용자가 몇 개의 정수를 입력할 것인지를 물은 후에 동적 배열을 생성하여 사용자로부터 받은 정수를 저장하는 프로그램
 
   입력 예시) 정수 개수: 3
            정수 입력값: 75, 14, 24, 35, 55
   출력 예시) 입력된 정수는: 75, 15, 25, 35, 55, */
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int num;    // 정수의 개수
//    cout << "정수의 개수를 입력하시오: ";
//    cin >> num;
//    int *p = new int[num];
//
//    for(int i=0; i < num; i++)
//    {
//        int user_num;
//        cout << "정수를 입력하시오: ";
//        cin >> user_num;
//        p[i] = user_num;
//
//    }
//
//    cout << "입력된 정수는: ";
//    for(int i=0; i < num; i++)
//    {
//        cout << p[i] << ", ";
//    }
//    cout << endl;
//
//}

//#include <iostream>
//#include <memory>
//#include <random>
//#include <time.h>
//using namespace std;
//
//class Point {
//    int x,y;
//
//public:
//    Point(int x=0, int y=0) : x(x), y(y) {}
//
//    void setX(int x_) {this->x=x_;}
//    void setY(int y_) {this->y=y_;}
//    int getX() { return x; }
//    int getY() { return y; }
//};
//
//bool isEqual(Point& p1, Point& p2);
//
//int main() {
////    unique_ptr<Point[]> p(new Point[100]);
//    Point *p = new Point[100];
//    srand(time(NULL));
//
//    for(int i=0; i<100; i++)
//    {
//        p[i].setX(rand()%100);
//        p[i].setY(rand()%10);
//    }
//
//    for(int i=0; i<100; i++)
//    {
//        cout << "p" << i << "의 x값: " <<p[i].getX() << " ";
//        cout << "p" << i << "의 y값: " << p[i].getY() << endl;
//        if(isEqual(p[i], p[i+1]))
//        {
//            cout << i << "번째 좌표와" << i+1 << "번째 좌표가 같습니다." << endl;
//        }
//        else
//        {
//            cout << i << "와 " << i+1 << "이 다릅니다." << endl;
//        }
//    }
//
//    delete[] p;
//
//    return 0;
//}

//bool isEqual(Point p1, Point p2) {
//    return ((p1.getX() == p2.getY()) && ( p1.getY()== p2.getY()));
//}

//bool isEqual(Point& p1, Point& p2) {
//    return ((p1.getX() == p2.getY()) && ( p1.getY()== p2.getY()));
//}

//#include <iostream>
//#include <memory>
//using namespace std;
//
//class Rect
//{
//    int width, height;
//
//public:
//    Rect(int w=0, int h=0) : width(w), height(h) {}
//    ~Rect() {}
//
//    int getWidth() { return width; }
//    int getHeight() { return height; }
//    const void setWidth(int w) { width = w; }
//    const void setHeight(int h) { height = h; }
//
//    // 사각형의 면적 계산 함수
//    int getArea();
//
//    // 사각형의 둘레 계산 함수
//    int getPerimeter();
//
//    void print()
//    {
//        cout << "너비: " << width;    cout << " 폭: " << height << endl;
//        cout << "사각형의 면적: " << getArea() << endl;
//        cout << "사각형의 둘레: " << getPerimeter() << endl;
//    }
//};
//
//int Rect::getArea()
//{
//    return width*height;
//}
//
//int Rect::getPerimeter()
//{
//    return (width*2)+(height*2);
//}
//
//bool is_equal(Rect* r1, Rect* r2);
//
//int main()
//{
//    Rect *p = new Rect;
//    unique_ptr<Rect> q(new Rect);   // 스마트 포인터
//
//    (*p).setWidth(10);
//    (*p).setHeight(20);
//
//    q->setWidth(20);
//    q->setHeight(10);
//
//    (*p).print();
//    is_equal(&p, &q);
//    delete p;
//    return 0;
//}
//
//bool is_equal(Rect* r1, Rect* r2)
//{
//    return ((r1->getArea() == r2->getArea()));
//}

