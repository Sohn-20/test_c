//
//  exception2.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/16.
//

//#include <iostream>
//using namespace std;
//
//string get_age(int n);
//
//int main()
//{
//    int age;  // 사용자의 나이
//    cout << "나이를 입력하시오: ";
//    cin >> age;
//
//    try {
//        get_age(age);
//    }
//
//    catch(const string& e)
//    {
//        cout << e << endl;
//    }
//
//}
//
//
//string get_age(int n)
//{
//    if(n < 0)
//    {
//        string e = "오류: 양수를 입력하여야 합니다.";
//        throw e;
//    }
//    if(n == 0)
//    {
//        return to_string(n) + " 살 신생아입니다.";
//    }
//    return to_string(n);
//}

#include <iostream>
#include <time.h>
using namespace std;

void player_check(string user);
void rock_paper_sissor(int computer, int user_result);
void convert_user_cin(string user_input, int *user_result);

int main() {
    // 1. 가위, 2. 바위, 3과 그외 : 보
    srand(time(NULL));
    int computer = rand() % 3;
    
    string user;
    int user_result;    // 가위, 바위, 보를 숫자화하여 담음
    
    try {
        while (true) {
            cout << "sissor, rock, paper 게임입니다." << endl;
            cout << "무엇을 내시겠습니까: ";
            cin >> user;
            player_check(user);
            
            convert_user_cin(user, &user_result);
            
            rock_paper_sissor(computer, user_result);
        }
    }
    
    catch (const string &e) {
        cout << "오류: \"가위\", \"바위\", \"보\" 중에서만 선택하세요." << endl;
    }
}

void player_check(string user)
{
    if(user != "sissor" & user != "rock" & user != "paper")
    {
        throw user;
    }
    
}

// 가위, 바위, 보 승패 판별 함수
// 1 : 가위  2 : 바위   3 그 외 : 보
void rock_paper_sissor(int computer, int user_result)
{
    if( (computer == 1 & user_result == 1) |
       (computer == 2 & user_result == 2) |
       (computer == 3 & user_result == 3) )
    {
        cout << "비겼습니다." << endl;
    }
    
    /* 유저가 이기는 경우 (컴: 가위 & 유저: 바위, 컴: 바위 & 유저: 보, 컴: 보 & 유저: 가위) */
    else if((computer == 1 & user_result == 2) | (computer == 2 & user_result == 3) | (computer == 3 & user_result == 1) )
    {
        cout << "유저 승리" << endl;
    }
    
    /* 유저가 지는 경우 */
    else {
        cout << "컴퓨터 승리" << endl;
    }
}

// 유저가 입력한 문자열 가위, 바위, 보를 숫자화시킴
void convert_user_cin(string user_input, int *user_result)
{
    if(user_input == "sissor")
    {
        *user_result = 1;
    }
    
    else if (user_input == "rock")
    {
        *user_result = 2;
    }
    
    else {
        *user_result = 3; // 보
    }
}
