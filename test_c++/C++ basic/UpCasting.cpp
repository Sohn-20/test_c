//
//  Cast2.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/05.
//

#include <iostream>
using namespace std;

class Animal {
public:
    float xpos=1;
    float ypos=2;
};

class FlyingAnimal : public Animal {
public:
    float zpos = 3;
};

// 매개변수 Animal a[] , Animal *a이랑 같다.
void printAnimals(Animal **a, int n) {
    for(int i=0; i<n; i++) {
        cout << "(" << a[i]->xpos << ", " << a[i]->ypos << ")" << endl;
    }
}

int main()
{
    Animal **a = new Animal*[10];
    for(int i=0; i < 10; i++) {
        a[i] = new FlyingAnimal;
    }
    printAnimals(a, 10);
    
    for(int i=0; i < 10; i++) {
        delete a[i];
    }
    
    delete [] a;
    
    return 0;
}
