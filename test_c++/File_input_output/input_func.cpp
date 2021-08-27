//
//  input_func.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/09.
//

#include <iostream>
#include <fstream>

using namespace std;

int main() {
//    ifstream is{"text_1.txt"};
//    if(!is) { // 연산자 오버로딩
//        cerr << "파일 오픈에 실패하였습니다" << endl;
//        exit(1);
//    }
//
//    char c;
//    is.get(c);      // 하나의 문자를 읽는다.
//    while(!is.eof()) // 파일의 끝이 아니면
//    {
//        cout << c;
//        is.get(c);
//    }
//    cout << endl;
    
//    ofstream os{"text_1.txt"};
//    char c;
//    while(cin.get(c))
//    {
//        os.put(c);
//    }
//
    
    ifstream is{"score.txt"};
    ofstream os{"result.txt"};
    
    if(!is) {
        cerr << "파일 오픈 실패" << endl;
        exit(1);
    }
    
    if(!os) {
        cerr << "파일 오픈 실패" << endl;
        exit(1);
    }
    
    char c;
    int line_number = 1;
    is.get(c);
    os << line_number << ": ";
    
    while(!is.eof())
    {
        os << c;
        if(c == '\n')
        {
            line_number++;
            os << line_number << ": ";
        }
        
        is.get(c);
    }
    return 0;
}
