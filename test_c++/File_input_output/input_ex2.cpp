//
//  input_ex2.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/10.
//

//#include <iostream>
//#include <vector>
//#include <string>
//#include <fstream>
//#include <termios.h>
//using namespace std;
//
//int getch(void);
//
//int main() {
//    vector<string> words;
//    ifstream infile{"words.txt"};
//
//    while(infile) {
//        string r = words[rand() % words.size()];
//        cout << "이번에 선택된 단어는 " << r << endl;
//        getch();    // 사용자가 하나의 문자를 누를 때까지 기다린다.
//    }
//
//    return 0;
//}
//
//// getch 함수 직접 구현
//int getch(void)
//{
//    int ch;
//
//    struct termios buf;
//    struct termios save;
//
//    tcgetattr(0, &save);
//    buf = save;
//
//    buf.c_lflag &= -(ICANON|ECHO);
//    buf.c_cc[VMIN] = 1;
//    buf.c_cc[VTIME] = 0;
//
//    tcsetattr(0, TCSAFLUSH, &buf);
//
//    ch = getchar();
//
//    tcsetattr(0, TCSAFLUSH, &save);
//
//    return ch;
//}

/* 소문자 모음이 발견되면 *기호로 바꾸는 프로그램 */
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//int main()
//{
//    fstream iofile{"words.txt", ios::in | ios::out};
//    if(!iofile) {
//        cout << "words.txt 파일을 열 수 없습니다." << endl;
//        exit(1);
//    }
//
//    char ch;
//    while(iofile.get(ch))
//    {
//        switch (ch) {
//            case 'a':
//            case 'e':
//            case 'i':
//            case 'o':
//            case 'u':
//                // 한글자 앞으로 간다.
//                iofile.seekg(-1, ios::cur);
//
//                // 쓰기 모드로 바꾸어서 모음 위치에 '*'을 쓴다.
//                iofile << '*';
//
//                // 다시 읽기 모드로 바꾼다.
//                iofile.seekg(iofile.tellg(), ios::beg);
//                break;
//        }
//    }
//
//    return 0;
//}

//int main() {
//    ofstream os{ "sample.txt" };
//    ifstream is{ "sample.txt" };
//
//    if(!os)
//    {
//        cerr << "파일 오픈에 실패하였습니다." << endl;
//        exit(1);
//    }
    
//    if(!is)
//    {
//        cerr << "파일 오픈에 실패하였습니다." << endl;
//        exit(1);
//    }
    
//    for(int i=0; i <10; i++)
//    {
//        os << i << " ";
//    }
    
//    int num, sum=0;
//
//    while(!is.eof())
//    {
//        is >> num;
//        sum += num;
//    }
//
//    cout << "파일에 저장된 정수의 합은 " << sum << endl;
//
//    return 0;
//}

//int main() {
//    ofstream os { "sample.txt"};
//
//    if(!os)
//    {
//        cerr << "파일 오픈에 실패하였습니다." << endl;
//        exit(1);
//    }
//
//    cout << "끝내고 싶다면 1를 입력하시오." << endl;
//    char s;
//    while(cin.get(s))
//    {
//        if(s == '1')
//            break;
//        os.put(s);
//    }
//
//    return 0;
//}

//int main() {
//    fstream infile {"sample.txt"};
//    ofstream outfile {"out_sample.txt"};
//
//    if(infile.fail() == true)
//    {
//        cerr << "파일 오픈에 실패하였습니다." << endl;
//        exit(0);
//    }
//
//    if(outfile.fail() == true)
//    {
//        cerr << "파일 오픈에 실패하였습니다." << endl;
//        exit(0);
//    }
//
//    char s;
//    while (!infile.eof()) {
//        infile.get(s);
//        if(s == tolower(s))
//        {
//            char c = toupper(s);
//            outfile.put(c);
//        }
//    }
    
//    ifstream os{"out_sample.txt"};
//
//    if(os.fail() == true)
//    {
//        cerr << "파일 오픈에 실패하였습니다." << endl;
//        exit(0);
//    }
//
//    char p;
//    while (!os.eof()) {
//        os.get(p);
//        cout << p;
//    }
//
//    return 0;
//}

//int main() {
//    fstream alhpa { "sample.txt" };
//
//    if(alhpa.fail() == true)
//    {
//        cerr << "파일 오픈에 실패하였습니다." << endl;
//        exit(0);
//    }
//
//    alhpa.seekg(0, ios::end);
//    long size = alhpa.tellg();
//    cout << "파일 크기는 " << size << endl;
//
//    char c[size];
//
//    for(int i=0; i<size; i++)
//    {
//        alhpa.seekg(-1,ios::cur);
//        alhpa.read((char *)(c+i), sizeof(char));
//        cout << c[i];
//        alhpa.seekg(-1,ios::cur);
//    }
//    cout << endl;
//    return 0;
//
//}

int main()
{
    ifstream is {"data.txt"};
    ifstream copy {"data_copy.txt"};
    
    if(!is)
    {
        cerr << "파일 오픈에 실패하였습니다." << endl;
        exit(1);
    }
    
    if(!copy)
    {
        cerr << "파일 오픈에 실패하였습니다." << endl;
        exit(1);
    }
    
    
    // vector로 파일 안에 모든 데이터를 받아 저장한다.
    vector<string> s1;
    vector<string> s2;
    
    // 파일의 데이터를 벡터로 건네줄 string형 변수
    string v1;
    string v2;
    
    while(!is.eof())
    {
        getline(is, v1);
        getline(copy, v2);
        
        s1.push_back(v1);
        s2.push_back(v2);
    }
    
    size_t size = (s1.size() >= s2.size()) ? s2.size() : s1.size();
    
    bool check_flag = true;
    
    for(int i=0; i < (int)size; i++)
    {
        if(s1[i] != s2[i])
        {
            check_flag =false;
            break;
        }
    }
    
    if(check_flag)
        cout<< "표절입니다."<<endl;
 
    return 0;
}
