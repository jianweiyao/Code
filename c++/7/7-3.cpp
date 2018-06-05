// 占位参数与默认参数值

#include <stdio.h>

int func(int x, int = 0);

int main(int argc, const char *argv[]) {
    printf("%d\n", func(1));
    printf("%d\n", func(2, 3));

    return 0;
}

int func(int x, int) {
    return x;
}
