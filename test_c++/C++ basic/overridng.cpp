//
//  overridng.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/03.
//
// override : 우선하다
// overloading : 한 가지를 여러개로 정의한다.

//#include <iostream>
//
//using namespace std;
//
//class Base {
//public:
//    int a = 10; // 최신 버전 추가 기능
//    // Base() : a(10) { }
//    // int a;와 동일
//    void Print() {
//        cout << "From Base!!" << endl;
//    }
//};

//class Derived : public Base {
//public:
//    int a =20;
//    void Print() {
//        cout << "From Derived!!" << endl;
//    }
//};
//
//int main() {
//    Base b;
//    Derived d;
//
//    d.Print();
//    d.Base::Print();
//    d.Derived::Print();
//    cout << b.a << endl;
//    cout << d.a << endl;
//    cout << d.Base::a << endl;
//    cout << d.Derived::a << endl;
//    return 0;
//}

// 정적 바인딩
//#include <iostream>
//
//using namespace std;
//
//class Base {
//public:
//    void Print() {
//        cout << "From Base!!" << endl;
//    }
//};
//
//class Derived : public Base {
//public:
//    int a =20;
//    void Print() {
//        cout << "From Derived!!" << endl;
//    }
//};
//
//class Derived2 : public Base {
//public:
//
//};
//// binding : 어떤 타입으로 할지 결정함.
//int main()
//{
//    Base *b = new Derived();
//    b->Print();
//    b = new Derived2();
//    b->Print();
//    delete b;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Weapon {
//public:
//    Weapon(int power) : power(power) {
//        cout << "Weapon(int)" << endl;
//    }
//
//    virtual void Use() {    // 가상 함수
//        cout << "Weapon::Use()" << endl;
//    }
//
//protected:
//    int power;
//};
//
//class Sword : public Weapon {
//public:
//    Sword(int power) : Weapon(power) {
//        cout << "Sword(int)" << endl;
//    }
//
//    void Use() {
//        cout << "Sword::User()" << endl;
//        Swing();
//    }
//
//private:
//    void Swing() {
//        cout << "Swing sword" << endl;
//    }
//};
//class Magic : public Weapon {
//public:
//    Magic(int power, int manaCost) : Weapon(power), manaCost{manaCost} {
//        cout << "Magic(int, int)" << endl;
//    }
//
//    void Use() {
//        cout << "Magic::Use()" << endl;
//        Cast();
//    }
//
//private:
//    void Cast() {
//        cout << "Cast magic." << endl;
//    }
//    int manaCost;
//};
//
//int main() {
//    Sword mySowrd(10);
//    Magic myMagic(15, 7);
//
//    mySowrd.Use();
//    myMagic.Use();
//    cout << endl;
//
//    Weapon *currentWeapon;
//    currentWeapon = &mySowrd;
//    currentWeapon->Use();
//
//    currentWeapon = &myMagic;
//    currentWeapon->Use();
//
//    return 0;
//}
