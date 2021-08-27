//
//  Container_ex.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/19.
//

//#include <iostream>
//#include <vector>
//using namespace std;
//
//void is_int(int input);
//double avg(int, int);
//
//int main() {
//    vector<int> user;
//
//    try {
//        int num;
//        while (true) {
//            cout << "정수를 입력하시오(음수는 종료): ";
//            cin >> num;
//
//            is_int(num);
//            user.push_back(num);
//        }
//    }
//
//    catch(const string& e) {
//        int vec_size = user.size();
//        int sum =0;
//        for(auto& e : user)
//        {
//            sum += e;
//        }
//
//        cout << "평균= " << avg(sum, vec_size) << endl;
//    }
//
//}
//
//void is_int(int input)
//{
//    string quit = "종료";
//    if(input < 0) throw quit;
//}
//
//double avg(int sum, int n)
//{
//    return sum / n;
//}

//#include <iostream>
//#include <random>
//#include <vector>
//using namespace std;
//
//template <typename T>
//bool is_even(const T& num)
//{
//    return (num % 2) ==0;
//}
//
//int main() {
//    // 시드값을 얻기 위한 random_device 생성
//    random_device rd;
//
//    // random_device를 통해 난수 생성 엔진을 초기화
//    mt19937 gen(rd());
//
//    // 0부터 99 까지 균등하게 나타나는 난수열을 생성하기 위해 균등 분포 정의
//    uniform_int_distribution<int> dis(0,99);
//
//
//    vector<int> numbers;
//
//    for (int i =0; i < 100; i++) {
//        numbers.push_back(dis(gen));
//    }
//
//    size_t count_even = count_if(numbers.begin(), numbers.end(), is_even<int>);
//
////    for (auto& e : numbers) {
////        if(e % 2 == 0)
////        {
////            count_even++;
////        }
////    }
//
//    cout << "값이 짝수인 요소의 개수: " << count_even << endl;
//
//    return 0;
//}

#include <iostream>
#include <string>
#include <map>
using namespace std;

void drawline();

int main()
{
    map<string, string> dic;
    int select;     // 기능 선택

    try{
        while (true) {
            drawline();
            cout << "단어 추가: 1, 단어 테스트: 2, 종료: 3"<< endl;
            drawline();

            cout << "하나를 선택하세요 : ";
            cin >> select;

            switch (select) {
                case 1:
                {
                    string word, meaning;
                    cout << "추가할 단어: ";
                    cin >> word;

                    cout << "추가할 의미: ";
                    cin >> meaning;

                    dic[word] = meaning;
                    break;
                }

                case 2:
                {
                    string user_meaning, word;
                    cout << "테스트할 단어: ";
                    cin >> word;

                    cout << "단어의 의미를 입력하시오: ";
                    cin >> user_meaning;
                    if(user_meaning == dic[word])
                    {
                        cout << endl << "정답입니다." << endl;
                    }

                    else {
                        cout << endl << "틀렸습니다. 다시 도전해주세요." << endl;
                    }
                    break;
                }

                case 3:
                {
                    int e=1;
                    throw e;
                    break;
                }

                default:
                    break;
            }
        }
    }

    catch(int e)
    {
        cout << "프로그램을 종료합니다." << endl;
    }
}

void drawline()
{
    char line = '=';
    for(int i=0; i < 20; i++)
    {
        cout << line;
    }
    cout << endl;
}

//#include <iostream>
//#include <string>
//#include <map>
//#include <cstdlib>
//using namespace std;
//
//void word_insert(string& word, string& meaning);
//
//int main() {
//    map<string, string> dic;
//    // 반복자 선언
////    map<string,string>::iterator iter;
//    srand((unsigned int)time(NULL));
//    string word, meaning;
//    int word_limit; // 사전의 단어 개수
//
//    cout << "사전에 넣을 단어의 수를 입력하시오: ";
//    cin >> word_limit;
//
//    for(int i=0; i < word_limit; i++) {
//        // 단어 입력하는 함수
//        word_insert(word, meaning);
//        dic.insert(make_pair(word, meaning));
//    }
//
////    for(auto iter = dic.begin(); iter != dic.end(); iter++)
////    {
////        // iter->first는 키값을 저장, iter->second는 value를 저장.
////        cout << iter->first << " : " << iter->second << endl;
////    }
//
//    string word_name[word_limit];
//    string word_meaning[word_limit];
//    int i =0,user_in;
//    for(auto iter = dic.begin(); iter != dic.end(); iter++)
//    {
//        word_name[i] = iter->first;
//        word_meaning[i] = iter->second;
//        i++;
//    }
//
//    while (true) {
//        i = rand()%word_limit;
//        auto random_name = word_name[i];
//        cout << random_name << "의 의미는? ";
//        for(int i=0; i < word_limit; i++)
//        {
//            cout << '(' << i+1 << ')' << word_meaning[i] << " ";
//        }
//
//        cout << "번호를 선택하시오: (종료를 원하면 -1)";
//        cin >> user_in;
//
//        if( i == user_in-1)
//        {
//            cout << "맞았습니다." << endl;
////            break;
//        }
//        else if(user_in == -1)
//            break;
//
//        else {
//            cout << "틀렸습니다." << endl;
//        }
//
//    }
//
//
//
//    return 0;
//
//}
//
//void word_insert(string& word, string& meaning)
//{
//    string input_word, input_meaning;
//    cout << "추가할 단어: ";
//    cin >> input_word;
//
//    cout << "추가한 단어의 의미: ";
//    cin >> input_meaning;
//
//    word = input_word;
//    meaning = input_meaning;
//}
