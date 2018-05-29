// class的初探

#include <stdio.h>

struct A {
    // defualt to public
    int i;
    // defualt to public
    int getI() {
        return i;
    }
};
class B {
    // defualt to private
    int i;
    // defualt to private
    int getI() {
        return i;
    }
};
int main(int argc, const char *argv[]) {
    A a;
    B b;

    a.i = 4;
    printf("a.getI() = %d\n", a.getI());
    b.i = 4;    // Error， 访问private变量
    printf("b.getI() = %d\n", b.getI());    // Error，访问private函数

    return 0;
}
