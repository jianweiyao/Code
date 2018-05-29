// 重载的意义分析
#include <stdio.h>
#include <string.h>

char* strcpy(char* buf, const char* str, unsigned int n) {
    return strncpy(buf, str, n);
}

int main(int argc, const char* argv[]) {
    const char* s = "D.T.Software";
    char buf[8] = {0};
    
    // strcpy(buf, s);
    strcpy(buf, s, sizeof(buf)-1);
    
    printf("%s\n", buf);
    return 0;
}
