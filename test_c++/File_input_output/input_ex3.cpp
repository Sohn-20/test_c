//
//  input_ex3.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/12.
//

#include <iostream>
#include <fstream>
using namespace std;
string encryption(string s, int n);
string decryption(string s, int n);

int main() {
    string origin;

    getline(cin, origin);

    string cryptogram = encryption(origin, 3);
    cout << "암호문: " << cryptogram << endl;

    cout << "원문: " << decryption(cryptogram, 3) << endl;



}

// s: 원문, n: 알파벳을 뒤로 미는 거리
string encryption(string s, int n)
{
    // string 문자열 길이
    unsigned int len = s.size();
    for(int i =0; i < len; i++)
    {
        if(s[i] != ' ') {
//            char start = (s[i] >= 'A' && s[i] <= 'Z') ? 'A' : 'a';

            // 알파벳 개수는 26개이므로 알파벳 개수의 범위를 벗어나지 못하게함
//            s[i] = start + (s[i]+3 - (start+32))%26;

            if(s[i] >= 'a' && s[i] <= 'z')
            {
                char start = 'A';
                s[i] = start + (s[i]+n - 'a')%26;
            }

            else if(s[i] >= 'A' && s[i] <= 'Z')
            {
                char start = 'a';
                s[i] = start + (s[i]+n - 'A')%26;
            }
        }
    }

    return s;
}

string decryption(string s, int n)
{
    unsigned int len = s.size();
    for(int i=0; i < len; i++)
    {
        if(s[i] != ' ')
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                // 원문으로 돌아가기 위해선 xyz 입력시 맨끝으로 가야한다.
                // 따라서 abc가 선택될 때 초기값을 맨뒤로 조정할 필요가 있다.
                char start = (s[i] >= 'a' && s[i] < 'd') ? 'A'+26 : 'A';
                s[i] = start + (s[i]-n - 'a')%26;
            }
            

            else if(s[i] >= 'A' && s[i] <= 'Z')
            {
                char start = (s[i] >= 'A' && s[i] < 'D') ? 'a'+26 : 'a';
                s[i] = start + (s[i]-n - 'A')%26;
            }
        }
    }
    return s;
}

//#include <iostream>
//#include <fstream>
//#include <vector>
//using namespace std;
//
//class User
//{
//public:
//    User(string name="", string num="", string mail="") : name{name}, p_number{num}, email{mail},person_number{1} { }
//    ~User() { }
//
//    // 접근자
//    string getName() const { return name;}
//    string getNumber() const { return p_number;}
//    string getEmail() const { return email;}
//    string getP_num() const { return person_number;}
//
//    // 설정자
//    void setName(const string &n) { name =n;}
//    void setNumber(const string &num) { p_number = num;}
//    void setEmail(const string &mail) { email = mail;}
//    void setP_num(const string &num) { person_number=num;}
//
//private:
//    string name;
//    string p_number;
//    string email;
//    string person_number;
//
//};
//
///* 1. vector로 연락처 list를 만든다(포인터)
//   2. 사용자가 원하는 만큼 전화번호를 입력할 수 있도록 한다
//   2 - 1. 이름, 전화번호, 이메일을 입력한다.
//   2 - 2. 각 개인정보를 list에 하나씩 넣는다.
//   2 - 3. if문으로 사용자가 공백을 입력하거나 아니면 exit 단어를 입력하면 개인정보 입력 반복문 종료
//    3. 저장할 파일을 연다.
//    4. vector 개수만큼 파일 안에 각각 입력해준다.*/
//int main() {
//    vector<User *> list;
//    string name, p_number, email;
//
//    while(true)
//    {
//        cout << "이름, 전화번호, email을 입력하시오." << endl;
//        cin >> name;
//
//        if(name == "" | name == "exit")
//        {
//            break;
//        }
//
//        cin >> p_number;
//
//        if(p_number == "" | p_number == "exit")
//        {
//            break;
//        }
//
//        cin >> email;
//        if(email == "" | email == "exit")
//        {
//            break;
//        }
//
//        // 한 사람 당 vector 공간 하나씩 할당
//        list.push_back(new User(name, p_number, email));
//
//    }
//
//    ofstream p_list {"User_inforamtion.txt"};
//    ifstream o_list {"User_inforamtion.txt"};
//
//    if(!p_list)
//    {
//        cerr << "파일을 오픈할 수 없습니다." << endl;
//        exit(1);
//    }
//
//    if(!o_list)
//    {
//        cerr << "파일을 오픈할 수 없습니다." << endl;
//        exit(1);
//    }
//
//    for(int i=0; i< list.size(); i++)
//    {
//        list[i]->setP_num(to_string(i));
//        p_list << list[i]->getP_num() << " " << list[i]->getName() << " " << list[i]->getNumber() << " " << list[i]->getEmail() << endl;
//    }
//
//    int a=0;
//    while(!o_list.eof())
//    {
//        string input_s;
//        list.push_back(new User());
//
//        o_list >> input_s;
//       list[a]->setP_num(input_s);
//
//        o_list >> input_s;
//        list[a]->setName(input_s);
//
//        o_list >> input_s;
//        list[a]->setNumber(input_s);
//
//        o_list >> input_s;
//        list[a]->setEmail(input_s);
//
//        a++;
////        word[i] = input_s;
//    }
//    string user_want;
//
//    while(true)
//    {
//        cout << "검색을 끝내고 싶다면 e를 입력하시오." << endl;
//        cout << "몇번째 회원의 전화번호를 알고싶으신가요? ex) 1, 2" << endl;
//        cin >> user_want;
//
//        if(user_want =="e")
//            break;
//
//        bool check_flag = false; // 찾는 사람이 없을 때 판별하는 변수
//
//        for(int i=0; i < list.size(); i++)
//        {
//            if(list[i]->getP_num() == user_want)
//            {
//                cout << "찾으시는 분의 전화번호 "<< list[i]->getNumber() << endl;
//                check_flag = true;
//                break;
//            }
//        }
//
//        if(check_flag == false)
//        {
//            cout << "찾으시는 분이 없습니다." << endl;
//        }
//    }
//
//    while(!list.empty()) {
//            delete list.back();
//            list.pop_back();
//        }
//
//    return 0;
//}


