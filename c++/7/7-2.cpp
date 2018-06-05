// 默认参数的错误示例

#include <stdio.h>

int add(int x, int y = 0, int z = 0);
// int add(int x, int y = 0, int z);

int main(int argc, const char *argv[]) {
    printf("%d\n", add(1));
    printf("%d\n", add(1, 2));
    printf("%d\n", add(1, 2, 3));

    return 0;
}

int add(int x, int y, int z) {
    return x + y + z;
}
