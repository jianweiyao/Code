// C++标准库的Ｃ库兼容
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[]) {
    printf("Hello world!\n");
    
    char* p = (char*)malloc(16);
    
    strcpy(p, "D.T.Software");
    
    double a = 3;
    double b = 4;
    double c = sqrt(a * a + b * b);
    
    printf("c = %f\n", c);
    
    free(p); 
    return 0;
}
