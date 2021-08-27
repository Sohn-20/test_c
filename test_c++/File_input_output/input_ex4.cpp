//
//  input_ex4.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/13.
//

#include <iostream>
#include <fstream>
using namespace std;

void setFile(string fileName);
void r_File(string fileName);
void count_Files_Word(string fileName);

int main()
{
//    r_File("User_information.txt");
    count_Files_Word("User_information.txt");
    return 0;
}

// 파일 쓰기, 파일 생성
void setFile(string fileName)
{
    ofstream newFile {fileName};

    if(!newFile)
    {
        cerr << "파일 오픈에 실패하였습니다." << endl;
        exit(1);
    }

    while(true)
    {
        string contents;
        cout << "내용을 입력해주세요." << endl;
        getline(cin, contents);

        // 입력 중지
        if(contents == "e" | contents == "" | contents == " ")
            break;

        newFile << contents << endl;
    }
    newFile.close();
}

void r_File(string fileName)
{
    ifstream newFile {fileName};

    if(!newFile)
    {
        cerr << "파일 오픈에 실패하였습니다." << endl;
        exit(1);
    }
    
    cout << "탐색할 단어 : The" << endl;
    int line_num=0; // 라인 번호
    
    while(!newFile.eof())
    {
        string contents;
        getline(newFile, contents);
        line_num++;
        
        if(contents.find("the") != string::npos | contents.find("The") != string::npos)
        {
            cout << line_num << " : " << contents << endl;
        }
        
    }
    newFile.close();
}

void count_Files_Word(string fileName)
{
    ifstream newFile {fileName};

    if(!newFile)
    {
        cerr << "파일 오픈에 실패하였습니다." << endl;
        exit(1);
    }
    
    int count_words=0;  // 단어 개수 저장 변수
    
    while(!newFile.eof())
    {
        string contents;
        newFile >> contents;
        count_words++;
        
    }
    cout << "단어의 수: " << count_words << endl;
    newFile.close();
}
