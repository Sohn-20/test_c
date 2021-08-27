//
//  input2.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/09.
//

/*
    File I/O
    std::ios::app : append, 붙여쓰기, 기존 파일이 있으면
    std::ios::trunc : overwrite, 엎어쓰기, 기존 파일이 있으면
 
    ifstream
    ifstream, std::ios::in
 */

//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main()
//{
//     ofstream : output file stream
//    ofstream f("text_1.txt", ios::app);
//    ofstream f("text_1.txt", ios::trunc);
//    ofstream f("text_1.txt");
//
//    if(!f)
//    {
//        cout << "Unable to open file" << endl;
//        exit(1);
//    }
//
//    for(int i=0; i<20; i++)
//    {
//        f << i << " ";
//    }
    
    
//    fstream f("text_1.txt", ios::out);
//
//    if(!f)
//    {
//        cout << "Unable to open file" << endl;
//        exit(1);
//    }
//
//    for(int i=100; i<105; i++)
//    {
//        f << i << " ";
//    }

//    ifstream f("text_1.txt");
//    ofstream os{"text_1.txt", ios::app};
//
//    if(!os)
//    {
//        cout << "Unable to open file" << endl;
//        exit(1);
//    }
//
//    os << "추가되는 줄 #1" << endl;
//    os << "추가되는 줄 #2" << endl;
//
//    return 0;
//}

