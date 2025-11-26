#include <stdio.h>

int main() {
    int source[100], destination[100], n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements for source array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &source[i]);
    }
    

    for (int i = 0; i < n; i++) {
        destination[i] = source[i];
    }
    
    printf("Source array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", source[i]);
    }
    
    printf("\nDestination array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");
    
    return 0;
}