//
//  excption1.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/15.
//
/* 피자 한판을 여러명이 먹을 때, 한 사람이 먹을 수 있는 피자 조각수*/
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int pizza_slices = 0;
//    int persons = -1;
//    int slices_per_person = 0;
//
//    try
//    {
//        cout << "피자 조각수를 입력하시오: ";
//        cin >> pizza_slices;
//
//        cout << "사람 수를 입력하시오: ";
//        cin >> persons;
//
//        if(persons == 0)
//            throw persons;
//        slices_per_person = pizza_slices / persons;
//        cout << "한사람 당 피자는 " << slices_per_person << "입니다." << endl;
//    }
//    catch (int e)
//    {
//        cout << "사람이 " << e << " 명 입니다. " << endl;
//    }
//    return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//// n!(팩토리얼 구현)
//int fact(int n) {
//    // 예외 처리 시 문자열로 처리하기 위해 to_string() 함수 사용
//    if (n < 0) throw to_string(n) + ": 음수입니다.";
//    if( n == 0) return 1;
//    return n * fact(n-1);
//}
//
//int comb(int n, int r) {
//    int a = fact(n);
//    int b = fact(r);
//    int c = fact(n - r);
//    return a / b/ c;
//}
//
//int main() {
//    int n, r;
//    while(true) {
//        try {
//            cin >> n >> r;
//            cout << comb(n, r) << endl;
//        }
//        catch (const string &e) {
//            cout << e << endl;
//        }
//    }
//}
 

/* 피자 한판을 여러명이 먹을 때, 한 사람이 먹을 수 있는 피자 조각수 */
//#include <iostream>
//using namespace std;
//
//int dividePizza(int pizza_slices, int persons);
//
//int main()
//{
//    int pizza_slices = 0;
//    int persons = -1;
//    int slices_per_person = 0;
//
//    try
//    {
//        cout << "피자 조각수를 입력하시오: ";
//        cin >> pizza_slices;
//
//        cout << "사람 수를 입력하시오: ";
//        cin >> persons;
//
//        if(persons == 0)
//            throw persons;
//        slices_per_person = dividePizza(pizza_slices, persons);
//        cout << "한사람 당 피자는 " << slices_per_person << "입니다." << endl;
//    }
//    catch (int e)
//    {
//        cout << "사람이 " << e << " 명 입니다. " << endl;
//    }
//    return 0;
//}
//
//int dividePizza(int pizza_slices, int persons)
//{
//    if (persons == 0)
//        throw persons;
//    return pizza_slices / persons;
//}

#include <iostream>
using namespace std;

int main()
{
    int pizza_slices = 12;
    int persons = 0;
    int slices_per_person = 0;
    
    try {
        cout << "피자 조각수를 입력하시오: ";
        cin >> pizza_slices;
        cout << "사람 수를 입력하시오: ";
        cin >> persons;
        
        if(persons < 0) throw "nagative";  // 예외 발생
        if(persons == 0) throw persons;  // 예외 발생
        
        slices_per_person = pizza_slices / persons;
        cout << "한사람당 피자는 " << slices_per_person << "입니다." << endl;
    }
    catch (const char *e) {
        cout << "오류: 사람수가 " << e << "입니다." << endl;
    }
    catch (int e) {
        cout << "오류: 사람이 " << e << " 명입니다." << endl;
    }
    
    return 0;
}
