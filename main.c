#include <stdio.h>

struct Root {
    double One;
    double Two;
};


int delta(double a, double b, double c) {
    return (b * b) - (4 * a * c);
}

int denominator(int a) {
    return 2 * a;
}

int squareRootPlusB(double a, double b, double c) {
    return b + delta(a, b, c) / denominator(a);
}

int squareRootMinusB(double a, double b, double c) {
    return b - delta(a, b, c) / denominator(a);
}

int methodBhaskara(double a, double b, double c, struct Root *str) {
    str->One = squareRootPlusB(a, b, c);
    str->Two = squareRootMinusB(a, b, c); 
    return 0;
}

int main() {
    struct Root Roots;
    double a, b, c;
    printf("equação: ax² + bx + c \n");
    printf("Defina um valor para A: \n");
    scanf("%d", &a);
    printf("Defina um valor para B: \n");
    scanf("%d", &b);
    printf("Defina um valor para c: \n");
    scanf("%d", &c);
    methodBhaskara(a, b, c, &Roots);
    printf("%lf", Roots.One);
    printf("%lf", Roots.Two);
    return 0;
}