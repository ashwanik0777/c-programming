#include <stdio.h>

int fib(int n);

int main() {
    int n;
    printf("Enter the Num to find nth Fabonacci Sereis: ");
    scanf("%d", &n);

    printf("The %dth Fibonacci number is: %d\n", n, fib(n));

    return 0;
}
int fib(int n){
    int a = 0;
    int b = 1;
   int nextTerm, i;

    if (n == 0)
        return a;
    else if (n == 1)
        return b;
 
    for (i = 2; i <= n; i++) {
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    return b;
    }