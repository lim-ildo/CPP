//1. Free the memory when the time is up!
#include <iostream>

#include <thread>
#include <windows.h>
using namespace std;


class AA {
public:
    virtual void cry() {
        cout << "dd" << endl;
    }
};

class dog : public AA {
    virtual void cry() {
        cout << "ss" << endl;
    }
};

void foo(AA* p) {
    p->cry();

}

int main() {

    AA a;
    dog d;

    foo(&a);
    foo(&d);

}