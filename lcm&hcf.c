#include <stdio.h>

int main() {
    int a, b, temp_a, temp_b, hcf, lcm, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp_a = a;
    temp_b = b;

    // Calculate HCF using Euclidean algorithm
    while (temp_b != 0) {
        temp = temp_b;
        temp_b = temp_a % temp_b;
        temp_a = temp;
    }
    hcf = temp_a;
    lcm = (a * b) / hcf;

    printf("HCF: %d\n", hcf);
    printf("LCM: %d\n", lcm);

    return 0;
}
