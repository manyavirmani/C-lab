#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    int sign = 1;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        sum += sign * (1.0 / i);
        
        if (i == 1) {
            printf("1");
        } else {
            if (sign == 1) {
                printf(" + 1/%d", i);
            } else {
                printf(" - 1/%d", i);
            }
        }
        
        sign = -sign;  
    }
    
    printf("\nSum of the series = %.6f\n", sum);
    
    return 0;
}