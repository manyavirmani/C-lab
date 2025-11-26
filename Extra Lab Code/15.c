#include <stdio.h>
#include <math.h>

long long factorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n;
    float x;
    double sum = 1;

    printf("Enter x and n: ");
    scanf("%f %d", &x, &n);

    for(int i = 1; i <= n; i++)
        sum += pow(x, i) / factorial(i);

    printf("Series sum = %.4lf", sum);
    return 0;
}