// 继承对象模型初探

#include <iostream>
#include <string>

using namespace std;

class Demo {
protected:
    int mi;
    int mj;
    int mh;
public:
    virtual void print() {
        cout << "mi = " << mi << ", "
             << "mj = " << mj << endl;
    }
};

class Derived : public Demo {
    int mk;
public:
    Derived(int i, int j, int k) {
        mi = i;
        mj = j;
        mk = k;
    }

    void print() {
        cout << "mi = " << mi << ", "
             << "mj = " << mj << ", "
             << "mk = " << mk << endl;
    }
};

// 证明Derived内存排布与Test类一样
struct Test {
    void* p;
    int mi;
    int mj;
    int mk;
};

int main(int argc, const char* argv[]) {
    cout << "sizeof(Demo) = " << sizeof(Demo) << endl;
    cout << "sizeof(Derived) = " << sizeof(Derived) << endl;

    Derived d(1, 2, 3);
    Test* p = reinterpret_cast<Test*>(&d);

    cout << "Before changing ..." << endl;

    d.print();

    p->mi = 10;
    p->mj = 20;
    p->mk = 30;

    cout << "After changing ..." << endl;

    d.print();

    return 0;
}
