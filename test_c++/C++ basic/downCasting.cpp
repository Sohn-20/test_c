//
//  downCasting.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/05.
//

//#include <iostream>
//using namespace std;
//
//class RemoteControl {
//
//public:
//    // 순수 가상 함수 정의
//    virtual void turnON() = 0;  // 가전 제품을 켠다.
//    virtual void turnOFF() = 0; // 가전 제품을 끈다.
//};
//
//class Television : public RemoteControl
//{
//public:
//    void turnON()
//    {
//        // 실제로 TV의 전원을 켜기 위한 코드가 들어간다.
//        if(status == 0)
//        {
//            status =1;
//            cout << "TV가 켜졌습니다." << endl;
//        }
//        else
//        {
//            cout << "TV가 이미 켜졌습니다." << endl;
//        }
//    }
//
//    void turnOFF()
//    {
//        // 실제로 TV의 전원을 끄기 위한 코드가 들어간다.
//        if(status != 0)
//        {
//            status =0;
//            cout << "TV가 종료되었습니다." << endl;
//        }
//        else {
//            cout << "TV가 이미 종료되었습니다." << endl;
//        }
//    }
//
//private:
//    int status; // 현재 기기의 상태
//
//};
//
//class Refrigerator
//{
//public:
//    void turnON()
//    {
//        // 실제로 냉장고의 전원을 켜기 위한 코드가 들어간다.
//        if(status == 0)
//        {
//            status =1;
//            cout << "냉장고가 켜졌습니다." << endl;
//        }
//        else {
//            cout << "냉장고가 이미 켜졌습니다." << endl;
//        }
//    }
//
//    void turnOFF()
//    {
//        // 실제로 냉장고의 전원을 끄기 위한 코드가 들어간다.
//        if(status != 0)
//        {
//            status =0;
//            cout << "냉장고가 종료되었습니다." << endl;
//        }
//        else
//        {
//            cout << "냉장고가 이미 종료되었습니다." << endl;
//        }
//    }
//
//private:
//    int status; // 현재 기기의 상태
//};
//
//
//int main() {
//    Television *pt = new Television();
//    pt->turnON();
//    pt->turnOFF();
//
//    Refrigerator *pr = new Refrigerator();
//    pr->turnON();
//    pr->turnOFF();
//
//    delete pt;
//    delete pr;
//
//    return 0;
//}

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

class Sprite {
public:
    Sprite(int x, int y, char shape) : x{x}, y{y}, shape{shape} { }
    
    // 접근자
    int getX() { return x;}
    int getY() { return y;}
    char getShape() {return shape;}
    
    // 설정자
    void setX(int x) { x = x;}
    void setY(int y) { y = y;}
    void setShape(char shape) { shape = shape;}
    
    virtual void move(char d) =0;
    
    
    // 다른 스프라이트와의 충돌 여부를 계산. 충돌 시 true 반환
    bool checkCollision(Sprite *other) {
        if(x == other->getX() && y == other->getY())
            return true;
        else
            return true;
    }
    
protected:
    int x,y;    // 현재 좌표
    char shape; // 현재 모양
};

// 주인공 스프라이트
class Hero : public Sprite
{
public:
    Hero(int x, int y) : Sprite(x,y,'H') { }
    
    void draw() { cout << 'H';}
    
    void move(char d)
    {
        if(d == 'a') { x -= 1;}
        else if(d == 'w') { y -= 1;}
        else if(d == 's') { x += 1;}
        else if(d == 'd') { y += 1;}
    }
};

// 보물을 나타내는 클래스
class Treasure : public Sprite {
public:
    Treasure(int x, int y) : Sprite(x,y,'T') { }
    
    void move(char d) {
    }
};

class Enemy : public Sprite {
public:
    Enemy(int x, int y) : Sprite(x,y,'E') { }
    
    void move(char d) { }
};

// 게임 보드를 표시
class Board
{
    char *board;
    int width, height;
    
public:
    Board(int w, int h) : width{w}, height{h} {
        board = new char[width*height];
        clearBoard();
    }
    
    ~Board() {
        delete board;
    }
    
    void setValue(int r, int c, char shape) {
        board[r*width + c] = shape;
    }
    
    void printBoard() {
        for(int i=0; i < height; i++)
        {
            cout << "\t";
            for(int j =0; j < width; j++)
                cout << board[i*width + j];
            cout << endl;
        }
    }
    
    void clearBoard() {
        for(int i=0; i< height; i++)
            for(int j=0; j < width; j++)
                board[i*width + j] = '.';
    }
};

void drawLine(char x)
{
    cout << endl;
    for(int i=0; i < 50; i++)
        cout << x;
    cout << endl;
}

int main()
{
    // 벡터를 사용하여 게임에서 나타나는 모든 스프라이트들을 저장한다.
    // 다형성을 사용해야 하므로 포인터를 벡터에 저장한다.
    // 다형성은 포인터를 이용해야 사용할 수 있음을 잊지 말자.
    vector<Sprite *> list;
    int width, height;
    
    cout << "보드의 크기를 입력하시오[최대 10X10]: " << endl;
    cout << "가로: ";
    cin >> width;
    
    cout << "세로: ";
    cin >> height;
    
    Board board(height, width);
    list.push_back(new Hero(0, 0));
    list.push_back(new Treasure(height - 1, width - 1));
    list.push_back(new Enemy(3,3));
    
    // 게임 설명을 출력한다.
    drawLine('*');
    cout << "이 게임의 목표는 함정(T)이나 적(E)을 만나지 않고 보물에 도달하는 것이다. ";
    cout << "주인공은 a, s, w, d 키를 이용하여 움직일 수 있다. " << endl;
    drawLine('*');
    cout << endl;
    
    Sprite* treasure = list[1];
    
    // 게임 루프
    while(true)
    {
        // 보드를 다시 그린다.
        board.clearBoard();
        for(auto& e : list)
            board.setValue(e->getY(), e->getX(), e->getShape());
        board.printBoard();
        
        // 사용자의 입력을 받는다.
        char direction;
        cout << "어디로 움직일까요(a, s, w, d): ";
        cin >> direction;
        
        // 모든 스프라이트를 이동시킨다.
        for(auto& e: list)
        {
            if(e->checkCollision(treasure)) {
                cout << "보물을 찾았습니다." << endl;
                break;
            }
            e->move(direction);
        }
        drawLine('-');
        
    }
    
    // 벡터 안의 모든 동적 할당을 해제한다.
    for(auto& e: list)
        delete e;
    list.clear();
    return 0;
}
