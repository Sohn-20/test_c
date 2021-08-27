//
//  Container1.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/18.
//

//#include <iostream>
//#include <time.h>
//#include <list>
//using namespace std;
//
//int main()
//{
//    list<int> values;
//
//    srand(time(NULL));
//    for(int i=0; i < 10; i++) {
//        values.push_back(rand()%100);
//    }
//    values.sort();
//
//    for(auto& e: values) {
//        cout << e << ' ';
//    }
//
//    cout << endl;
//    return 0;
//}

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

//void W_file(string fileName);
//void R_file(string fileName, string& vector);

int main()
{
    string report1 = "This is a original report.";
    string report2 = "This is a copy report";
    
    vector<string> v1;
    vector<string> v2;
    
    // 첫번째 리포트를 단어로 분리하는 과정
    istringstream iss1(report1);
    for(string s; iss1 >> s;)
        v1.push_back(s);
    
    // 두 번째 리포트를 단어로 분리하는 과정
    istringstream iss2(report2);
    for(string s; iss2 >> s;)
        v2.push_back(s);
    
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    
    vector<string> common;
    set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(common));
    
    cout << "report1=" << report1 << endl;
    cout << "report2=" << report2 << endl << endl;
    cout << "공통적인 단어: ";
    for (string e : common)
        cout << e << ' ';
    cout << endl;
    return 0;
}

//void W_file(string fileName)
//{
//    ofstream os {fileName, ios::out};
//
//    if(!os)
//    {
//        cerr << "파일 오픈에 실패하였습니다." << endl;
//        exit(1);
//    }
//
//    while (true) {
//        string contexts;
//        cout << "내용을 입력해주세요." << endl;
//        getline(cin, contexts);
//
//        if(contexts == "e" | contexts == "" | contexts == " ")
//            break;
//
//        os << contexts << endl;
//    }
//    os.close();
//}

//void R_file(string fileName, vector<string> vec)
//{
//    ifstream os { fileName, ios::in};
//
//    if(!os)
//    {
//        cerr << "파일 오픈에 실패하였습니다." << endl;
//        exit(1);
//    }
//
//    while (!os.eof()) {
//        string fileContexts;
//        getline(os, fileContexts);
//
//        vec.push_back(fileContexts);
//
//
//    }
//}

