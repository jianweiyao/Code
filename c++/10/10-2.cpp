// 初始化动态内存

#include <stdio.h>

int main(int argc, const char* argv[]) {
    int* pi = new int(1);       // 这是单个变量
    // int* pa = new int[1];    // 这是数组

    float* pf = new float(2.0f);
    char* pc = new char('c');

    printf("*pi = %d\n", *pi);
    printf("*pf = %f\n", *pf);
    printf("*pc = %c\n", *pc);

    delete pi;
    delete pf;
    delete pc;

    return 0;
}
