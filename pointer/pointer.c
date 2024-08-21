#include <stdio.h>
#include <string.h>

int main() {
    char str_a[20];  // A 20-element character array
    char* pointer;   // A pointer, meant for a character array
    char* pointer2;  // And yet another one

   
    strcpy_s(str_a, sizeof(str_a), "Hello, world!\n");
    pointer = str_a; // Set the first pointer to the start of the array.
    printf("%s", pointer);

    pointer2 = pointer + 2; // Set the second one 2 bytes further in.
    printf("%s", pointer2);
    strcpy_s(pointer2, sizeof(str_a) - (pointer2 - pointer), "y you guys!\n");
    printf("%s", pointer);

    return 0;
}
