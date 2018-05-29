// 统计类对象的个数（不成功）

#include <stdio.h>

class Test {
private:
    int mCount;
public:
    Test() : mCount(0) {
        mCount++;
    }
    ~Test() {
        --mCount;
    }
    int getCount() {
        return mCount;
    }
};

Test gTest;

int main(int argc, const char* argv[]) {
    Test t1;
    Test t2;

    printf("count = %d\n", gTest.getCount());
    printf("count = %d\n", t1.getCount());
    printf("count = %d\n", t2.getCount());

    return 0;
}
