//
//  binary_file.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/10.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//int main() {
//    int buffer[5];
//    ifstream is {"test.dat", ifstream::binary};
//
//    if(!is)
//    {
//        cout << "test.txt 파일을 열 수 없습니다." << endl;
//        exit(1);
//    }
//    is.read((char *)&buffer, sizeof(buffer));
//    for(auto& e : buffer)
//        cout << e << " ";
//    return 0;
//}

int main() {
    string ifile, ofile;
    cout << "원본 파일 이름: ";
    cin >> ifile;
    cout << "복사 파일 이름: ";
    cin >> ofile;
    ifstream source{ifile, ios::binary};
    ofstream dest{ofile, ios::binary};
    
#if 1
    dest << source.rdbuf();
#else
    if(source.is_open() && dest.is_open())
        while(!source.eof()) {
            dest.put(source.get());
        }
#endif
    return 0;
}



