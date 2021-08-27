//
//  Upcasting_ex.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/08.
//

//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Shape {
//protected:
//    int x,y;
//
//public:
//    Shape(int x, int y) : x{x}, y{y} { }
//    ~Shape() { }
//
//    // 접근자
//    int getX() { return x;}
//    int getY() { return y;}
//
//    // 설정자
//    void setX(int x) { x = x;}
//    void setY(int y) { y= y; }
//
//    virtual double getArea() =0;
//};
//
//class Rect : public Shape {
//
//public:
//    Rect(int x, int y) : Shape(x,y) { }
//
//    double getArea() {
//        return x*y;
//    }
//};
//
//class Circle : public Shape
//{
//public:
//    Circle(int x, int y, double r) : Shape(x,y), radius(r) { }
//
//    // 접근자
//    double getRadius() { return radius;}
//
//    // 설정자
//    void setRadius(double r) { radius = r;}
//    double getArea()
//    {
//        return radius*radius;
//    }
//
//private:
//    double radius;
//};
//
//class Triangle : public Shape
//{
//public:
//    Triangle(int width, int height) : Shape(width, height) { }
//
//    double getArea()
//    {
//        return 0.5 * x * y;
//    }
//};
//
//int main() {
//    vector<Shape *> figure;
//    int width, height;  // 사용자 입력 밑변, 높이
//    double radius;      // 사용자 입력 반지름
//    int i=0;    // 도형 일련번호
//
//    cout << "밑변과 높이를 입력하시오." << endl;
//    cout << "밑변: " << endl;
//    cin >> width;
//    cout << "높이: " << endl;
//    cin >> height;
//
//    cout << "원의 반지름을 입력하시오: " << endl;
//    cin >> radius;
//
//    figure.push_back(new Rect(width, height));
//    figure.push_back(new Triangle(width, height));
//    figure.push_back(new Circle(width, height, radius));
//
//    for(auto& e : figure)
//    {
//        cout << "도형 #"<< i << "의 면적: " << e->getArea() << endl;
//        i++;
//    }
//
//    return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Weapon {
//public:
//    virtual void load() = 0;
//
//};
//
//class Bomb : public Weapon {
//public:
//    Bomb(int dura=100, int dam=14) {
//        durability = dura;
//        damage = dam;
//    }
//    ~Bomb() { }
//
//    // 접근자
//    int getDamage() { return damage;}
//    int getDurability() { return durability;}
//
//    // 설정자
//    void setDurability(int dura) { durability=dura;}
//    void setDamage(int dam) { damage = dam;}
//
//    void load() {
//        cout << "폭탄을 적재합니다." << endl;
//    }
//
//private:
//    int durability, damage;
//};
//
//class Gun : public Weapon {
//public:
//    Gun(int dura=100, int dam=13) {
//        durability = dura;
//        damage = dam;
//    }
//    ~Gun() { }
//
//    // 접근자
//    int getDamage() { return damage;}
//    int getDurability() { return durability;}
//
//    // 설정자
//    void setDurability(int dura) { durability=dura;}
//    void setDamage(int dam) { damage = dam;}
//
//    void load() {
//        cout << "총을 적재합니다." << endl;
//    }
//
//private:
//    int durability, damage;
//};
//
//int main() {
//    vector<Weapon *> wp;
//
//    wp.push_back(new Bomb());
//    wp.push_back(new Gun());
//
//    for(auto& e : wp)
//    {
//        e->load();
//    }
//
//    for(int i=0; i < wp.size(); i++)
//    {
//        delete wp[i];
//    }
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//class HomeAppliance {
//public:
//    HomeAppliance(int p) : price{p} { }
//    virtual ~HomeAppliance() {}
//
//    // 설정자
//    void setPrice(int p) { price = p;}
//
//    virtual double getPrice() = 0;
//
//protected:
//    int price;
//
//};
//
//class Refrigerator : public HomeAppliance
//{
//public:
//    Refrigerator(int p) : HomeAppliance(p) { }
//    ~Refrigerator() { }
//
//    double getPrice() { return price;}
//
//};
//
//class Televison : public HomeAppliance
//{
//public:
//    Televison(int p) : HomeAppliance(p) { }
//
//    double getPrice() { return price;}
//};
//
//void print(HomeAppliance* p) {
//    cout << "가격: " << p->getPrice() << endl;
//}
//
//int main() {
////    HomeAppliance *p = new Refrigerator(90000);
////    HomeAppliance *q = new Televison(190000);
////
////    print(p);
////    print(q);
////
////    delete p;
////    delete q;
//
//    HomeAppliance **list = new HomeAppliance*[6];
//
//    list[0] = new Refrigerator(90000);
//    list[1] = new Televison(190000);
//    list[2] = new Refrigerator(270000);
//
//    for(int i=0; i < 3; i++)
//    {
//        print(list[i]);
//    }
//
//    for(int i=0; i < 3; i++)
//    {
//        delete list[i];
//    }
//
//    delete [] list;
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//class GameCharactere {
//public:
//    GameCharactere() {}
//    virtual ~GameCharactere() { }
//    virtual void draw() =0;
//
//};
//
//class Hobbit : public GameCharactere {
//public:
//    void draw() {
//        cout << "호빗을 화면에 그립니다. " << endl;
//    }
//
//private:
//
//};
//
//class Sorcerer : public GameCharactere {
//public:
//    void draw() {
//        cout << "주술사를 화면에 그립니다." << endl;
//    }
//private:
//};
//
//int main() {
//    GameCharactere** p = new GameCharactere*[2];
//    p[0]= new Hobbit();
//    p[1] = new Sorcerer();
//    int j=0;
//
//    for(int i=0; i< 4; i++)
//    {
//        if(j > 1)
//        {
//            j = 0;
//        }
//        p[j]->draw();
//        ++j;
//    }
//
//    for(int i=0; i <2; i++)
//    {
//        delete p[i];
//    }
//
//    delete[] p;
//    return 0;
//}

#include <iostream>
#include <vector>
using namespace std;

class Animal {
public:
    virtual ~Animal() { }
    virtual void speak()=0;
};

class Dog : public Animal {
public:
    void speak() { cout << "멍멍!" << endl; }
};

class Cat : public Animal {
public:
    void speak() { cout << "야옹!" << endl; }
    
};

int main() {
    vector<Animal *> Barn;
    Barn.push_back(new Dog());
    Barn.push_back(new Cat());
    
    for(auto& e : Barn)
    {
        e->speak();
    }
    
    for(auto& e: Barn)
    {
        delete e;
    }
    
    return 0;
}
