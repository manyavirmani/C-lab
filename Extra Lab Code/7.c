#include <stdio.h>

int main() {
    int arr[100], n, searchNum, found = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number to search: ");
    scanf("%d", &searchNum);
    

    for (int i = 0; i < n; i++) {
        if (arr[i] == searchNum) {
            printf("Number %d found at position %d\n", searchNum, i + 1);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Number %d not found in the array\n", searchNum);
    }
    
    return 0;
}