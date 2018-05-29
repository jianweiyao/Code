/*
 * @Author: laoyao
 * @Date: 2018-05-10 11:25:31
 * @Last Modified by: laoyao
 * @Last Modified time: 2018-05-10 11:28:35
 */

#include <stdio.h>

class Test {
    int mi;

public:
    Test(int i) {
        mi = i;
    }

    Test() {
        Test(0);
    }

    void print() {
        printf("mi = %d\n", mi);
    }
};

int main(int argc, const char* argv[]) {
    Test t;

    t.print();
    return 0;
}
