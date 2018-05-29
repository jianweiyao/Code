/*
 * @Author: laoyao
 * @Date: 2018-05-10 11:36:57
 * @Last Modified by: laoyao
 * @Last Modified time: 2018-05-10 12:46:43
 */

#include <stdio.h>

class Test {
    int mi;

    void init(int i) {
        mi = i;
    }

public:
    Test(int i) {
        init(i);
    }
    Test() {
        init(0);
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
