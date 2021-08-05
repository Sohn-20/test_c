//
//  Namespace.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/07/26.
//

#include <iostream>

using namespace std;

int n;
void set() {
    n=10; // 명시적 전역 변수
}

namespace Sohn {
  int n;
void set();
//  void set() {
//    n = 20;
//  }
}
namespace google {
int n;
void set(); // 선언만 함
//void set() {
//    ::n = 30;
//}
}

// 네임스페이스 안에 네임스페이스
namespace dom {
int n;
void set() {
    n=20;
}
namespace gogo {
void set() {
    n =30;
}
int n;
}
}

int main()
{
    ::set();
    Sohn::set();
    google::set();
    
    dom::set();
    dom::gogo::set();
    
    cout << dom::n << endl;
    cout << dom::gogo::n << endl;
    
//    cout << ::n << endl;
//    cout << Sohn::n << endl;
//    cout << google::n << endl;
}

// 정의 방법1
namespace Sohn {
  void set() {
    n = 20;
  }
}

// 정의 방법 2
void google::set() {
    n=30;
}

