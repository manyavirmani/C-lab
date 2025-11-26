#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Series: 1");
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
        if (i > 1) {
            printf(" + 1/%d", i);
        }
    }
    
    printf("\nSum of the series = %.6f\n", sum);
    
    return 0;
}