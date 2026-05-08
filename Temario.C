#include <stdio.h>
#include <stdlib.h>

int ABC(int a, int b, int c) {
    if (c == a && a < b) {return 100;}
    else {return 0;}
}

void f_doble(int a) {
    printf("Doble: %d\n", a*2);
}

void f_triple(int *a) {
    *a *= 3;
}

int f_resta(int a) {
    a -= 2;
    if (a <= 0) {return a;}
    else {f_resta(a);}
}

void punteros() {
    int x = 5;
    int *p = &x;
    printf("x: %d\n", x);
    printf("p: %d\n", p);
    printf("*p: %d\n", *p);
}

void punteros_2() {
    int *v;
    v = (int*)malloc(5*sizeof(int));
    free(v);
}

int Factorial (int N) {
    if (N < 0) {printf("No esta definido para negativos\n"); return;}
    if (N == 0 || N == 1) {return 1;}
    return N * Factorial(N-1);
}

int main() {
    int a;
    printf("Dame un numero del 1 al 100: ");
    scanf("%d", &a);
    if (a < 1) {a = 1;} if (a > 100) {a = 100;}
    f_doble(a);
    f_triple(&a);
    printf("Triple: %d\n\n", a);
    punteros();
    return 0;
}
