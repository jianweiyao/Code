// 随时获取类对象的数目（成功）

#include <stdio.h>

class Test {
private:
    static int cCount;
public:
    Test() {
        cCount++;
    }
    ~Test() {
        --cCount;
    }
    static int GetCount() {
        return cCount;
    }
};

int Test::cCount = 0;

int main(int argc, const char* argv[]) {
    printf("count = %d\n", Test::GetCount());

    Test t1;
    Test t2;
    printf("count = %d\n", t1.GetCount());
    printf("count = %d\n", t2.GetCount());

    Test* pt = new Test();
    printf("count = %d\n", pt->GetCount());

    delete pt;
    printf("count = %d\n", Test::GetCount());

    return 0;
}
