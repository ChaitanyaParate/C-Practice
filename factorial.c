#include <stdio.h>

int fact(int);
void factorial(int);

int main() {
    int n, a;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    int f = fact(n);
    printf("Factorial using recursive function: %d\n", f);

    printf("Enter another number: ");
    scanf("%d", &a);
    
    factorial(a);
    return 0;
}

int fact(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fact(n - 1);
}

void factorial(int a) {
    int factorial = 1;
    for (int i = 1; i <= a; i++) {
        factorial *= i;
    }
    printf("Factorial without recursion: %d\n", factorial);
}
