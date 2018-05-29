// 函数重载的本质

#include <stdio.h>

int add(int a, int b) {    // int(int, int)
    return a + b;
}

int add(int a, int b, int c) {    // int(int, int, int)
    return a + b + c;
}

int main(int argc, const char* argv[]) {
    printf("%p\n", (int(*)(int, int))add);
    printf("%p\n", (int(*)(int, int, int))add);

    return 0;
}
