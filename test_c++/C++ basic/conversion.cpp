//
//  conversion.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/03.
//

#include <iostream>
#include <string>

using namespace std;

class Item {
public:
    Item(int num) : num(num) {  // 변환 생성자
        cout << "Item(int)" << endl;
    }
    Item(string name) : name(name) {    // 변환 생성자
        cout << "Item(string)" << endl;
    }

    // int로의 형변환 연산자 오버로딩
    // 형변환은 연산자이다 -> C, C++
    operator int() const {
        return num;
    }

    // string으로의 형변환 연산자 오버로딩
    operator string() const {
        return to_string(num) + " : " + name;   // 여러가지 숫자를 문자열로 바꿔줌
    }

    Item(int num, string name) : num(num), name(name) {
        cout<< "Item(int, string)" << endl;
    }

    void print() {
        cout << num << " : " << name << endl;
    }

private:
    int num;
    string name;
};

void println(string s) {
    cout << s << endl;
}

//void println(int s) {
//    cout << s << endl;
//}

int main() {
    Item I1 = Item(1);
    Item I2(2);
    Item I3 = 3;
    I3 = 3; // 묵시적 변환
    Item I4 = (Item)4;  // 명시적 변환

    Item I5(5);
    I5 = (string)"string";

    Item I6(1, "grass");
    Item I7 = {2, "dirt" };
    I7 = {2,"dird"};
    Item I8{3, "wood"};

    int itemNum1 = (int)I8; // 명시적 형변환
    int itemNum2 = I7;  // 묵시적 형변환
    cout << itemNum1 << endl;
    cout << itemNum2 << endl;

    println((string)I8);    // 명시적 형변환
    println(I8);    // 묵시적 형변환

    return 0;
}
