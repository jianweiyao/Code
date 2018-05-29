/*
 * @Author: laoyao
 * @Date: 2018-05-10 12:51:20
 * @Last Modified by: laoyao
 * @Last Modified time: 2018-05-10 12:51:48
 */

#include <stdio.h>

class Test {
    int mi;
public:
    Test(int i) {
        printf("Test(int i) : %d\n", i);
        mi = i;
    }

    Test(const Test& t) {
        printf("Test(const Test& t) : %d\n", t.mi);
        mi = t.mi;
    }

    Test() {
        printf("Test()\n");
        mi = 0;
    }

    int print() {
        printf("mi = %d\n", mi);
    }

    ~Test() {
        printf("~Test()\n");
    }
};

Test func() {
    return Test(20);
}

int main(int argc, const char* argv[]) {
    Test t = Test(10); // ==> Test t = 10;
    Test tt = func();  // ==> Test tt = Test(20); ==> Test tt = 20;

    t.print();
    tt.print();
    return 0;
}
