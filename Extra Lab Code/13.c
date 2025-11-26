#include <stdio.h>

long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    long long sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        long long fact = factorial(i);
        sum += fact;
        
        if (i == 1) {
            printf("%d!", i);
        } else {
            printf(" + %d!", i);
        }
    }
    
    printf("\nSum of the series = %lld\n", sum);
    
    printf("\nFactorial values:\n");
    for (int i = 1; i <= n; i++) {
        printf("%d! = %lld\n", i, factorial(i));
    }
    
    return 0;
}