//  vector_2.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/07/23.
//

//#include <iostream>
//using namespace std;
//
//class SMS{
//    string sender;  // 송신자의 전화번호
//    string receiver;    // 수신자의 전화번호
//    string text;    // 메시지 텍스트
//
//public:
//    SMS(string s="", string r="", string t="") : sender{s}, receiver{r}, text{t} {}
//
//    // 접근자
//    string getSender() {return  sender;}
//    string getReceiver() {return receiver;}
//    string getText() { return text;}
//
//    // 생성자
//    void setSender(string s) { sender=s;}
//    void setReceiver(string r) { receiver=r;}
//    void setText(string t) { text=t;}
//
//    void print();
//};
//
//void SMS::print()
//{
//    cout << "발신자: " << getSender() << " ";
//    cout << "수신자: " << getReceiver() << " ";
//    cout << "내용: " << getText() << " " << endl;
//}
//
//int main() {
//    SMS link1("010-1234-5678","010-1234-5679");
//
//    while(true)
//    {
//        string massage;
//        cout << "메시지를 입력해주세요. (종료는 exit)" << endl;
//        getline(cin, massage);
//
//        if(massage == "" || massage == "exit") break;
//        link1.setText(massage);
//        link1.print();
//    }
//
//    return 0;
//
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int size=0; // 벡터 사이즈 변수
//    cout << "정수의 개수: " << endl;
//    cin >> size;
//
//    vector<int> vec(size);
//
//    for(int i=0; i<size; i++)
//    {
//        int num=0; // 백터 안에 입력할 변수
//        cout << "정수를 입력하시오. ";
//        cin >> num;
//
//        vec[i] = num;
//    }
//    int max=vec[0]; // 최대값
//    int min=vec[0]; // 최소값
//    for(int i=0; i <size; i++)
//    {
//        if(vec[i] > max)
//        {
//            max = vec[i];
//        }
//        if(vec[i] < min)
//            min = vec[i];
//    }
//    cout << "최대값: " << max << endl;
//    cout << "최소값: " << min << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//bool compare(string a, string b);
//
//int main()
//{
//    int str_num;    // 문자열의 개수 변수
//    cout << "문자열의 개수: ";
//    cin >> str_num;
//
//    vector<string> vec(str_num);
//    for(int i=0; i < str_num; i++)
//    {
//        string str; // 입력받을 문자열
//
//        cout << "문자열을 입력하시오: ";
//        cin >> str;
//
//        vec[i] = str;
//    }
//
//    sort(vec.begin(), vec.end(),compare);
//
//    for(string e: vec)
//        cout << e << endl;
//    return 0;
//}
//
//bool compare(string a, string b)
//{
//    return a<b;
//}


//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Rect
//{
//    int width, height;
//
//public:
//    Rect(int w=0, int h=0) : width{w}, height{h} {}
//
//    // 접근자
//    int getWidth() { return width; }
//    int getHeight() { return height; }
//
//    // 설정자
//    void setWidth(int w) { width=w;}
//    void setHeight(int h) { height=h;}
//
//    double area();
//    void print()
//    { cout <<  "사각형 의 폭과 높이: " <<'(' << width << ',' << height << ')';}
//};
//
//double Rect::area() {
//    return getWidth()*getHeight();
//}
//
//int main() {
//    int num_rect;   // 사용자로부터 사각형의 개수를 입력받음
//    cout << "사각형의 개수를 입력해주세요: ";
//    cin >> num_rect;
//
//    vector<Rect> vec(num_rect);
//    for(int i=0; i<num_rect; i++)
//    {
//        int width, height;  // 사용자가 입력할 폭과 높이
//        cout << "사각형의 폭: "; cin >> width;
//        cout << "사각형의 높이: "; cin >> height;
//
//        vec[i].setWidth(width);
//        vec[i].setHeight(height);
//
//        if(vec[i].area() > 100)
//        {
//            cout << '#' << i << "번째 사각형" << endl;
//            vec[i].print();
//        }
//        cout << endl;
//    }
//
//    return 0;
//}

/* 1. 동적 배열 벡터를 하나 생성한다.
   2. 사용자로부터 이름, 학번을 받는다.
   3. Student 객체를 하나 만들어서 입력받은 이름과 학번을 넣어준다.
   4. 해당 Student 객체를 동적 배열에 넣어준다.
   4-0. 사용자가 입력을 끝마치고 싶다면 이름을 공백으로 입력하거나 이름 대신 exit 단어 입력.
   5. 동적 배열 안에 학생들을 학점 순으로 정렬한다.(sort 함수)*/

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//class Student {
//    string name;
//    double marks;
//
//public:
//    Student() : name{""}, marks{0} {}
//    Student(string n, double m) : name{n}, marks{m} {}
//
//    // 접근자
//    string getName() { return name;}
//    double getMarks() {return marks;}
//
//    // 설정자
//    void setName(string n) {name=n;}
//    void setMarks(double m) {marks=m;}
//
//    // 출력
//    void print();
//};
//
//
//void Student::print() {
//    cout << "이름: " << getName() << endl;
//    cout << "학점: " << getMarks() << endl;
//}
//
//bool compare(Student& s1, Student& s2);
//
//int main() {
//    vector<Student> group1;
//
//    while(true)
//    {
//        cout << "종료를 원한다면 exit을 입력하시오." << endl;
//        string name; double marks;  // 사용자로부터 입력받을 이름과 학점 변수
//        cout << "이름: "; cin >> name;
//        cin.ignore();
//        if(name == "" || name=="exit") break;
//        cout << "학점: "; cin >> marks;
//
//        Student p1;
//        p1.setName(name); p1.setMarks(marks);
//
//        group1.push_back(p1);
//
//    }
//    sort(group1.begin(), group1.end(), compare);
//    // 왜 group1.size() 대신 sizeof(group1)/sizeof(Student)를 쓸수 없는가?
//    for(int i=0; i < group1.size(); i++)
//    {
//        group1[i].print();
//    }
//    return 0;
//}
//
//bool compare(Student &s1, Student &s2)
//{
//    return s1.getMarks() > s2.getMarks();
//}
