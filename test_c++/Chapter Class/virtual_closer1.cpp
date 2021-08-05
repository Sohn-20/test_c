//
//  virtual_closer1.cpp
//  test_c++
//
//  Created by 손병훈 on 2021/08/04.
//

#include <iostream>
using namespace std;

class Ice {
public:
    Ice() { cout << "Ice()" << endl; }
    ~Ice() { cout << "~Ice()" << endl; }
};

class Pat {
public:
    Pat() { cout << "Pat()" << endl; }
    ~Pat() { cout << "~Pat()" << endl; }
};

class BingSoo {
public:
    BingSoo() {
        cout << "BingSoo()" << endl;
        ice = new Ice;
    }
    virtual ~BingSoo() {
        cout << "~BingSoo()" << endl;
        delete ice;
    }
    
private:
    Ice *ice;
};

class PatBingSoo : public BingSoo {
public:
    PatBingSoo() {
        cout << "PatBingSoo()" << endl;
        pat = new Pat;
    }
    ~PatBingSoo() {
        cout << "~PatBingSoo()" << endl;
        delete pat;
    }
    
private:
    Pat *pat;
};

int main() {
    BingSoo *p = new PatBingSoo;
    delete p;
    
    return 0;
}
