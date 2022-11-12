#include <stdio.h>

struct Root {
    int One;
    int Two;
};


int delta(int a, int b, int c) {
    return (b * b) - (4 * a * c);
}

int denominator(int a) {
    return 2 * a;
}

int squareRootPlusB(int a, int b, int c) {
    return b + delta(a, b, c) / denominator(a);
}

int squareRootMinusB(int a, int b, int c) {
    return b - delta(a, b, c) / denominator(a);
}

int methodBhaskara(int a, int b, int c, struct Root *str) {
    str->One = squareRootPlusB(a, b, c);
    str->Two = squareRootMinusB(a, b, c); 
    return 0;
}

int main() {
    struct Root Roots;
    int a, b, c;
    
    // entrada do usuário
    printf("Defina um valor para A: \n");
    scanf("%d", &a);
    printf("Defina um valor para B: \n");
    scanf("%d", &b);
    printf("Defina um valor para c: \n");
    scanf("%d", &c);

    //saída e cálculos
    printf("equação: %dx² + %dx + %d \n", a, b, c);
    methodBhaskara(a, b, c, &Roots);
    printf("Primeira Raiz: %d\n", Roots.One);
    printf("Segunda Raiz: %d\n", Roots.Two);
    return 0;
}