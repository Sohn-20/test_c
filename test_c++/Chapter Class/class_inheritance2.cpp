//
//  class_inheritance2.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/03.
//

#include <iostream>
#include <string>

using namespace std;

class Image {
public:
    // string으로 형변환하는 연산자 오버로딩
    operator string() {
        return "사진";
    }
};

class Message {
public:
    Message(int sendTime=0, string sendName="") {
        this->sendTime = sendTime;
        this->sendName = sendName;
    }
    
    int getSendTime() const { return sendTime;}
    string getSendName() const { return sendName;}
    virtual string GetContent() const { return ""; }
    
private:
    int sendTime;
    string sendName;
};

class TextMessage : public Message {
public:
    TextMessage(int sendTime, string sendName, string text) : Message(sendTime, sendName) {
        this->text = text;
    }
    
    string getText() const { return text; }
    string GetContent() const { return text; }
    
private:
    string text;
};

class ImageMessage : public Message {
public:
    ImageMessage(int sendTime, string sendName, Image *image) : Message(sendTime, sendName) {
        this->p_image = image;    // 얕은 복사
    }
    
    Image *getImage() const { return p_image; }
    string GetContent() const { return (string)*p_image;}
    
private:
    Image *p_image;   // Image 클래스 자체를 저장하기엔 너무 용량이 큼 -> 포인터로 해결
};

// 포인터로 넘겨줌
void printMessage(Message *m) {
    cout << "보낸 시간: " << m->getSendTime() << endl;
    cout << "보낸 사람: " << m->getSendName() << endl;
    cout << "내 용: " << m->GetContent() << endl;
    cout << endl;
}

// 참조(레퍼런스)를 넘겨줌
void printMessage(const Message &m) {
    cout << "보낸 시간: " << m.getSendTime() << endl;
    cout << "보낸 사람: " << m.getSendName() << endl;
    cout << "내 용: " << m.GetContent() << endl;
    cout << endl;
}

int main()
{
    Image *p_dogImage = new Image();
    
    Message *message[] = {
        new TextMessage(10, "Sohn", "안녕" ),
        new ImageMessage(20, "Sohn" , p_dogImage),
        new TextMessage(11, "Sohn", "안녕" ),
        new TextMessage(31, "Sohn", "안녕" )
    };
    
    for(Message *m : message) {
        printMessage(*m);
    }
    
    for(Message *m : message)
    {
        delete m;
    }
   
    delete p_dogImage;
    
    return 0;

