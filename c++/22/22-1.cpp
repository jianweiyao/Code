/*
 * @Author: laoyao
 * @Date: 2018-05-10 13:05:12
 * @Last Modified by: laoyao
 * @Last Modified time: 2018-05-10 13:05:42
 */

#include <stdio.h>

class Test {
    int mi;
public:
    Test(int i) {
        mi = i;
        printf("Test(): %d\n", mi);
    }

    ~Test() {
        printf("~Test(): %d\n", mi);
    }
};

int main(int argc, const char* argv[]) {
    Test t(1);

    Test* pt = new Test(2);
    delete pt;
    return 0;
}
