// 有趣的隐式的类型转换

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char* argv[]) {
    short s = 'a';
    unsigned int ui = 1000;
    int i = -2000;
    double d = i;

    cout << "d = " << d << endl;
    cout << "ui = " << ui << endl;
    cout << "ui + i = " << ui + i << endl;    // 隐式类型转换，值很大

    if ((ui + i) > 0) {
        cout << "Positive" << endl;
    } else {
        cout << "Negative" << endl;
    }

    cout << "sizeof(s + 'b') = " << sizeof(s + 'b') << endl;

    return 0;
}
