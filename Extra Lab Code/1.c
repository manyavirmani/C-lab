#include <stdio.h>

int main() {
    printf("Size of different data types in bytes:\n");
    printf("int: %zu bytes\n", sizeof(int));
    printf("float: %zu bytes\n", sizeof(float));
    printf("char: %zu bytes\n", sizeof(char));
    printf("double: %zu bytes\n", sizeof(double));
    printf("long long: %zu bytes\n", sizeof(long long));
    
    return 0;
}