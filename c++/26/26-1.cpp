// 随时获取类对象的数目（未成功）

#include <stdio.h>

class Test {
public:
    static int cCount;
public:
    Test() {
        cCount++;
    }
    ~Test() {
        --cCount;
    }
    int getCount() {
        return cCount;
    }
};

int Test::cCount = 0;

int main(int argc, const char* argv[]) {
    printf("count = %d\n", Test::cCount);

    Test::cCount = 1000;

    printf("count = %d\n", Test::cCount);

    return 0;
}
