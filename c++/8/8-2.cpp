// 函数默认参数VS函数重载

#include <stdio.h>

int func(int a, int b, int c = 0) {
    return a * b * c;
}

int func(int a, int b) {
    return a + b;
}

int main(int argc, const char* argv[]) {
    int c = func(1, 2);

    return 0;
}
