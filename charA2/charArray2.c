#include <stdio.h>
#include <string.h>
int main() {
    char str_a[20];
    strcpy_s(str_a, sizeof(str_a), "Hello, world!\n");
    printf("%s", str_a);
    return 0;
}