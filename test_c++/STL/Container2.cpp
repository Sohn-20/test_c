//
//  Container2.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/19.
//

//#include <iostream>
//#include <map>
//#include <string>
//#include <iterator>
//using namespace std;
//
//int main()
//{
//    map<string, string> myMap;
//
//    myMap.insert(make_pair("김철수", "010-123-5678"));
//    myMap.insert(make_pair("홍길동", "010-123-5679"));
//
//    myMap["최지영"] = "010-123-5680";
//
//    // 모든 요소 출력
//    for(auto& it : myMap) {
//        cout << it.first << " :: " << it.second << endl;
//    }
//
//    if(myMap.find("김영희") == myMap.end())
//        cout << "단어 '김영희'는 발견되지 않았습니다. " << endl;
//    return 0;
//}

//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//
//int main()
//{
//    map<string, string> dic;
//    dic["house"] = "집";
//    dic["boy"] = "소년";
//    dic["school"] = "학교";
//    dic.insert(make_pair("morning", "아침"));
//    dic.insert(make_pair("evening", "저녁"));
//
//    string word;
//    while (true) {
//        cout << "단어를 입력하시오." << endl;
//        cin >> word;
//        if(word == "quit" | word == "" | word == " ") break;
//        string meaning = dic[word];
//        if(meaning != "")
//            cout << word << "의 의미는 " << meaning << endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//
//int main()
//{
//    map<string, int> table;
//    string s;
//    
//    cout << "문장을 입력하시오(종료는 Ctrl-Z): ";
//    while (true) {
//        cin >> s;
//        table[s]++;
//        if(cin.eof())
//            break;
//    }
//    
//    for(auto& iter = table.begin(); iter != table.end(); iter++) {
//        cout << iter->first << " : " << iter->second << endl;
//    }
//    
//    return 0;
//}
