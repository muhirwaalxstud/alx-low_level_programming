#include <stdio.h>

int main() {
    printf("Size of char: %zu byte(s)\n", sizeof(char));
    printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of float: %zu byte(s)\n", sizeof(float));
    printf("Size of double: %zu byte(s)\n", sizeof(double));
    printf("Size of short: %zu byte(s)\n", sizeof(short));
    printf("Size of long: %zu byte(s)\n", sizeof(long));
    printf("Size of long long: %zu byte(s)\n", sizeof(long long));
    printf("Size of unsigned int: %zu byte(s)\n", sizeof(unsigned int));
    printf("Size of char pointer: %zu byte(s)\n", sizeof(char *));
    printf("Size of int pointer: %zu byte(s)\n", sizeof(int *));
    
    return 0;
}

