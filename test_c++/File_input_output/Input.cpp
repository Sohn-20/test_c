//
//  Input.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/08.
//
/*
 1. text file에 쓰기와 읽기
 
 2. 헤더: fstream
 
 3. 파일 쓰기
 - ofstream
 - ofstream outFile;
 - outFile.open('test.txt);
 - outFile.close()
 
 4. 파일 읽기
 - ifstream
 - ifstream inFile;
 - inFile.open('test.txt');
 - inFile.is_open() : bool
 - inFile.good() : bool
 - inFile.eof() : bool, 파일 끝에 도달?
 - inFile.fail() : bool, 읽기 실패
 */
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    
//    ifstream inFile;
//
//    inFile.open("test.txt");
//
//    if(!inFile.is_open())
//    {
//        cout << "Unable to open the file" << endl;
//        exit(1);
//    }
//
//    char name[50];
//    unsigned short age;
//    double weight;
//
//    inFile.getline(name, 50);
//    inFile >> age;
//    inFile >> weight;
//
//    cout << name << "는 " << age << "살이고, " << weight << " kg이다." << endl;
    
    
    
//    ofstream outFile;
//    outFile.open("test.txt");
//
//    // 사람 이름 , 나이, 체중 -> 콘솔에서만 이뤄짐
//    cout << "Name: ";
//    char name[50];
//    cin.getline(name, 50);
//
//    // 파일에 name을 써주기
//    outFile << name << endl;
//
//    cout << "Age: ";
//    unsigned short age;
//    cin >> age;
//
//    outFile << age << endl;
//
//    cout << "Weight: ";
//    double weight;
//    cin >> weight;
//
//    outFile << weight << endl;
//
//    outFile.close();
    
    ifstream inFile;

    inFile.open("numbers.txt");

    if(!inFile.is_open())
    {
        cout << "unable to open" << endl;
        exit(1);
    }

    int value=0;
    int sum(0);

    while(true)
    {
        // 읽을게 있느냐? bool 타입
        if(!inFile.good())
        {
            break;
        }

        inFile >> value;
        sum += value;

    }

    if (inFile.eof() == true)
    {
        cout << "Sum is: " << sum << endl;
        inFile.close();
        return 0;
    }

    else if (inFile.fail() == true)
    {
        cout << "Failure, file read" << endl;
        inFile.close();
        return -1;
    }

    inFile.close();

    return 0;
    
    // 객체 os가 범위를 벗어나면 ofstream 소멸자가 파일을 닫는다.
}

