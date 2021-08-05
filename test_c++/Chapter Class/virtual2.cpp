//
//  virtual2.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/04.
//

#include <iostream>
using namespace std;

const double PI = 3.1459265;

class Shape {
public:
    
    virtual double getArea() = 0;
    
    virtual void Resize(double f) = 0;
};

class Circle : public Shape {
public:
    Circle(double r) : r{r} {}
    
    // 원의 넓이 구하는 함수
    double getArea() {
        return PI * r * r;
    }
    
    // 주어진 배율만큼 도형 확대하는 함수
    void Resize(double f) {
        r *= f;
    }
    
private:
    double r;
    
};

class Rectangle : public Shape {
public:
    Rectangle(double a, double b) : a(a), b(b) {}
    
    double getArea() {
        return a*b;
    }
    
    // 주어진 배율만큼 도형 확대하는 함수
    void Resize(double f) {
        a *= f;
        b *= f;
    }
private:
    double a, b;
};

int main() {
    Shape *shapes[] = {
        new Circle(10),
        new Rectangle(20, 30)
    };
    
    for(Shape *s : shapes) {
        s->Resize(2);
    }
    
    for(Shape *s : shapes) {
        cout << s->getArea() << endl;
    }
    
    // shapes 포인터 배열 내의 배열 인자들은 모두 동적 할당이기에 동적할당 해제를 해준다.
    for(Shape *s : shapes)
    {
        delete s;
    }
    
    return 0;
}
