// 逗号表达式的示例

#include <iostream>
#include <string>

using namespace std;

void func(int i) {
    cout << "func() : i = " << i << endl;
}

int main(int argc, const char* argv[]) {
    int a[3][3] = {
        (0, 1, 2),    // 圆括号是逗号表达式
        (3, 4, 5),
        (6, 7, 8)
    };

    int i = 0;
    int j = 0;

    while (i < 5)
        func(i),

    i++;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << a[i][j] << endl;
        }
    }

    (i, j) = 6;

    cout << "i = " << i << endl;
    cout << "j = " << j << endl;

    return 0;
}
