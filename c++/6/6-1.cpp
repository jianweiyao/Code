// 内联函数初探

#include <stdio.h>

#define FUNC(a, b) ((a) < (b) ? (a) : (b))

inline int func(int a, int b) {
    return a < b ? a : b;
}

int main(int argc, const char *argv[]) {
    int a = 1;
    int b = 3;
    int c = FUNC(++a, b);
    // int c = func(++a, b);

    printf("a = %d\n", a);    // 3
    printf("b = %d\n", b);    // 3
    printf("c = %d\n", c);    // 3

    return 0;
}
