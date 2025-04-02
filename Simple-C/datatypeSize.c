#include <stdio.h>

int main() {
    // Declare all the data type variables
    int a;
    float b;
    char c;
    double d;
    signed int e; 
    unsigned int f;
    long int g;
    long long int h;
    short int i;

    // Print the size of each variable
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of float: %zu bytes\n", sizeof(b));
    printf("Size of char: %zu bytes\n", sizeof(c));
    printf("Size of double: %zu bytes\n", sizeof(d));
    printf("Size of signed int: %zu bytes\n", sizeof(e));
    printf("Size of unsigned int: %zu bytes\n", sizeof(f));
    printf("Size of long int: %zu bytes\n", sizeof(g));
    printf("Size of long long int: %zu bytes\n", sizeof(h));
    printf("Size of short int: %zu bytes\n", sizeof(i));

    return 0;
}
