#include <stdio.h>
#include <math.h>

long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}


double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int n;
    double x, sum = 0.0;
    
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    printf("Series: 1");
    sum = 1.0;  
    
    for (int i = 1; i <= n; i++) {
        double term = power(x, i) / factorial(i);
        sum += term;
        
        printf(" + x^%d/%d!", i, i);
    }
    
    printf("\nWhere x = %.2f\n", x);
    printf("Sum of the series = %.6f\n", sum);
    printf("For comparison, e^%.2f = %.6f\n", x, exp(x));
    
    return 0;
}