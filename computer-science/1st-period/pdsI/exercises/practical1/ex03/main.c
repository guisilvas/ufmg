#include <stdio.h>

void main() {
    float a = 3.14159, b = 2.71828;

    float x = a;
    a = b;
    b = x;

    printf("\nPi = %f", b);
    printf("\nEuler = %f", a);
}
